#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -177822842;
int var_1 = -2059313505;
int var_2 = -1303691088;
int var_3 = -907567058;
unsigned char var_5 = (unsigned char)116;
signed char var_6 = (signed char)57;
unsigned char var_8 = (unsigned char)31;
unsigned int var_9 = 817055829U;
int zero = 0;
unsigned long long int var_10 = 13050112224887036217ULL;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
