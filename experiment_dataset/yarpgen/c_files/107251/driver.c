#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 710185649;
long long int var_7 = 5905901722580041946LL;
signed char var_11 = (signed char)35;
signed char var_15 = (signed char)-78;
int zero = 0;
signed char var_18 = (signed char)-86;
unsigned int var_19 = 3475585944U;
signed char var_20 = (signed char)2;
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
