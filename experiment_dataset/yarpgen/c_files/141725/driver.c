#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2851698204617914114ULL;
unsigned short var_2 = (unsigned short)59289;
unsigned long long int var_6 = 2790580361878739150ULL;
unsigned int var_8 = 201071581U;
unsigned int var_13 = 596863645U;
int zero = 0;
unsigned long long int var_17 = 4600891524885291633ULL;
unsigned int var_18 = 3589912592U;
unsigned short var_19 = (unsigned short)9876;
unsigned int var_20 = 787292107U;
void init() {
}

void checksum() {
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
