#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34865;
signed char var_4 = (signed char)30;
unsigned char var_7 = (unsigned char)219;
short var_8 = (short)12762;
int var_9 = 1851036414;
signed char var_11 = (signed char)-66;
int var_12 = 340091469;
int zero = 0;
long long int var_13 = 4608818584406338263LL;
unsigned int var_14 = 2841187103U;
signed char var_15 = (signed char)-110;
long long int var_16 = -555477307114229873LL;
void init() {
}

void checksum() {
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
