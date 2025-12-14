#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2273702106U;
long long int var_13 = 3358195776831155877LL;
signed char var_14 = (signed char)-78;
unsigned int var_15 = 2350864364U;
long long int var_16 = 9018882802093722727LL;
int zero = 0;
int var_18 = 1610980815;
unsigned char var_19 = (unsigned char)93;
void init() {
}

void checksum() {
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
