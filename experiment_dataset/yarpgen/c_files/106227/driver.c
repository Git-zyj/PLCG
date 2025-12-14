#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)78;
_Bool var_5 = (_Bool)0;
long long int var_7 = -1202567316507179859LL;
unsigned int var_9 = 766791828U;
unsigned int var_16 = 521878217U;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1478560629;
unsigned char var_19 = (unsigned char)232;
unsigned long long int var_20 = 16590747641707662028ULL;
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
