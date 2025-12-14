#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 619131104U;
signed char var_3 = (signed char)83;
_Bool var_8 = (_Bool)1;
int var_10 = 737404987;
signed char var_12 = (signed char)-52;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -559185741;
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
