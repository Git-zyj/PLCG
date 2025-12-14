#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -947511396;
unsigned short var_2 = (unsigned short)43932;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3868659282U;
long long int var_6 = 8573348433804566739LL;
int zero = 0;
int var_10 = 1306730199;
signed char var_11 = (signed char)24;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3590175954U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
