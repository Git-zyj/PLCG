#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14668513388452367413ULL;
unsigned int var_3 = 461728264U;
unsigned short var_5 = (unsigned short)15791;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)4;
int var_10 = -1402136068;
int var_16 = 632372689;
signed char var_17 = (signed char)-6;
signed char var_18 = (signed char)-117;
int zero = 0;
unsigned char var_19 = (unsigned char)157;
unsigned int var_20 = 104218014U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
