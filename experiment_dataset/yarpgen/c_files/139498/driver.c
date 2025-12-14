#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14323280112579510216ULL;
unsigned char var_2 = (unsigned char)246;
unsigned short var_3 = (unsigned short)30897;
short var_4 = (short)8031;
long long int var_5 = 8655808822908552963LL;
unsigned long long int var_7 = 6782867219581346197ULL;
short var_8 = (short)-28599;
short var_9 = (short)28252;
unsigned int var_11 = 3076930197U;
int zero = 0;
unsigned long long int var_12 = 14461098238637195615ULL;
long long int var_13 = -7302344947551313291LL;
short var_14 = (short)15231;
unsigned char var_15 = (unsigned char)153;
unsigned char var_16 = (unsigned char)46;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
