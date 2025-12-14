#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6693421618839426150LL;
long long int var_1 = 2868361806161007149LL;
long long int var_2 = 4663868646122465923LL;
unsigned int var_4 = 2307821450U;
unsigned short var_6 = (unsigned short)61978;
unsigned long long int var_8 = 16944449878083311808ULL;
long long int var_9 = 4751490291165561322LL;
int zero = 0;
int var_10 = 966110837;
long long int var_11 = -2112843432766512063LL;
unsigned int var_12 = 766763925U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
