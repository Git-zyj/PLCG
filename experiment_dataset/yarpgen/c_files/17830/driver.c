#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)14394;
unsigned long long int var_8 = 15306625632482309074ULL;
unsigned char var_17 = (unsigned char)156;
int zero = 0;
signed char var_18 = (signed char)49;
unsigned long long int var_19 = 13932762963529549907ULL;
unsigned int var_20 = 828237596U;
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
