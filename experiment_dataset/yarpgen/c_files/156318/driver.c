#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
int var_7 = 198152808;
unsigned char var_12 = (unsigned char)226;
unsigned char var_13 = (unsigned char)201;
unsigned char var_14 = (unsigned char)208;
int zero = 0;
unsigned char var_17 = (unsigned char)45;
unsigned char var_18 = (unsigned char)24;
_Bool var_19 = (_Bool)1;
int var_20 = 1176838183;
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
