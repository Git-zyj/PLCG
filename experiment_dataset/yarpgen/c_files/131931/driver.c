#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1271139037238365408LL;
signed char var_19 = (signed char)-28;
int zero = 0;
unsigned int var_20 = 132245633U;
unsigned short var_21 = (unsigned short)40562;
unsigned char var_22 = (unsigned char)192;
unsigned char var_23 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
