#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-10158;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)172;
int zero = 0;
unsigned long long int var_10 = 186745531742930770ULL;
unsigned char var_11 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
