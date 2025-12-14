#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_7 = 1801711623;
short var_8 = (short)-27559;
unsigned int var_12 = 3303678749U;
unsigned long long int var_13 = 13204694525533575722ULL;
int zero = 0;
int var_15 = 151737289;
int var_16 = 1968442009;
unsigned char var_17 = (unsigned char)69;
int var_18 = -889094829;
signed char var_19 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
