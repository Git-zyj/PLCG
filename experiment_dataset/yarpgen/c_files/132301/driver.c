#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6485657601539955095LL;
int var_3 = -621367651;
int var_4 = 771645900;
unsigned short var_7 = (unsigned short)44808;
unsigned long long int var_9 = 14534126484130182846ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 824192434U;
unsigned char var_16 = (unsigned char)218;
int var_17 = -2107051999;
signed char var_18 = (signed char)15;
unsigned int var_19 = 1687596425U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
