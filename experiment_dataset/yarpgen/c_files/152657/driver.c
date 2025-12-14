#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58774;
unsigned short var_4 = (unsigned short)23611;
unsigned int var_5 = 1033348483U;
unsigned char var_6 = (unsigned char)10;
signed char var_7 = (signed char)71;
unsigned int var_8 = 3844611889U;
int zero = 0;
int var_11 = -2030202071;
long long int var_12 = 6823411843279604739LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
