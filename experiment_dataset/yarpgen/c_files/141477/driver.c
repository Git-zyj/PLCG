#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3256005299U;
unsigned char var_1 = (unsigned char)74;
unsigned char var_6 = (unsigned char)205;
unsigned int var_14 = 850919630U;
unsigned long long int var_15 = 10458387645370334808ULL;
int var_17 = 1994893102;
int zero = 0;
unsigned char var_18 = (unsigned char)188;
long long int var_19 = -3623762360215891712LL;
unsigned int var_20 = 751473727U;
void init() {
}

void checksum() {
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
