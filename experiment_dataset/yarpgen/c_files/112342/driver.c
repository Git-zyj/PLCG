#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)436;
long long int var_2 = 5822767909120966417LL;
int var_8 = 1602772768;
int zero = 0;
unsigned int var_15 = 4138306818U;
signed char var_16 = (signed char)54;
int var_17 = 780805199;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
