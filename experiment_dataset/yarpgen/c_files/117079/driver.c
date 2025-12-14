#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32176;
signed char var_1 = (signed char)5;
unsigned char var_5 = (unsigned char)146;
signed char var_6 = (signed char)-36;
unsigned short var_7 = (unsigned short)36429;
unsigned long long int var_10 = 6270625799350978216ULL;
int zero = 0;
unsigned long long int var_11 = 8469959444806258067ULL;
_Bool var_12 = (_Bool)0;
int var_13 = 1463243355;
unsigned char var_14 = (unsigned char)6;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
