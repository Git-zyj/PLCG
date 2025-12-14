#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -4346748315514993620LL;
unsigned int var_10 = 3901004782U;
signed char var_11 = (signed char)105;
signed char var_14 = (signed char)-3;
int zero = 0;
unsigned long long int var_17 = 14382163205070832127ULL;
long long int var_18 = 2988083499230141103LL;
void init() {
}

void checksum() {
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
