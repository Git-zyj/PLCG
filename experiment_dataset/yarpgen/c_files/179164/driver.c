#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35787;
signed char var_5 = (signed char)70;
unsigned long long int var_7 = 17701190178044319339ULL;
long long int var_14 = -3532118117109004910LL;
int zero = 0;
unsigned short var_16 = (unsigned short)29485;
unsigned char var_17 = (unsigned char)154;
unsigned long long int var_18 = 3219306076222482323ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
