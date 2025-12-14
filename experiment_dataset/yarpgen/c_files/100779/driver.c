#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1152617653;
short var_1 = (short)-31082;
long long int var_2 = 5970746863728795418LL;
long long int var_5 = -5619872959182809587LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)13106;
unsigned char var_10 = (unsigned char)55;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)91;
unsigned char var_13 = (unsigned char)45;
unsigned int var_14 = 1279228708U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
