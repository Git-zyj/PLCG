#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1422681742;
signed char var_10 = (signed char)-32;
unsigned char var_11 = (unsigned char)180;
unsigned char var_12 = (unsigned char)220;
int zero = 0;
unsigned int var_18 = 2185126627U;
short var_19 = (short)-5442;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
