#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6664473614630020998ULL;
long long int var_4 = -5328760957091130087LL;
unsigned long long int var_7 = 10813580434013460715ULL;
unsigned short var_8 = (unsigned short)27031;
unsigned long long int var_14 = 6103501956264666616ULL;
int zero = 0;
short var_19 = (short)-27909;
signed char var_20 = (signed char)88;
void init() {
}

void checksum() {
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
