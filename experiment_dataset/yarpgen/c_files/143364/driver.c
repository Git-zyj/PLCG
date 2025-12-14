#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)197;
unsigned long long int var_4 = 9525829299818931020ULL;
signed char var_11 = (signed char)-28;
signed char var_12 = (signed char)-30;
signed char var_14 = (signed char)31;
int zero = 0;
unsigned long long int var_17 = 10592651720334379630ULL;
unsigned char var_18 = (unsigned char)72;
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
