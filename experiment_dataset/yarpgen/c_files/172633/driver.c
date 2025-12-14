#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2769232078857538594ULL;
long long int var_3 = 5148244805879087500LL;
long long int var_6 = -7348459614779595272LL;
long long int var_10 = -7754517052513233272LL;
short var_11 = (short)-5787;
unsigned short var_12 = (unsigned short)49295;
int zero = 0;
short var_15 = (short)28240;
unsigned short var_16 = (unsigned short)44423;
long long int var_17 = 5447925301131560235LL;
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
