#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17515751880635218495ULL;
signed char var_2 = (signed char)-102;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)93;
unsigned long long int var_8 = 7737728744540330100ULL;
short var_9 = (short)20663;
unsigned char var_10 = (unsigned char)114;
unsigned int var_11 = 3536842021U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 488065016280099098ULL;
unsigned short var_14 = (unsigned short)47877;
unsigned char var_15 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
