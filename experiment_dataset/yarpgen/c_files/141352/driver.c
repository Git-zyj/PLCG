#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)31;
unsigned char var_4 = (unsigned char)176;
unsigned short var_9 = (unsigned short)42274;
int zero = 0;
unsigned char var_18 = (unsigned char)63;
unsigned short var_19 = (unsigned short)1603;
unsigned long long int var_20 = 10204059978231138431ULL;
void init() {
}

void checksum() {
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
