#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1336083217U;
signed char var_10 = (signed char)11;
int var_17 = 1314145257;
int zero = 0;
unsigned char var_18 = (unsigned char)101;
long long int var_19 = 7148483533174937041LL;
unsigned short var_20 = (unsigned short)65389;
unsigned int var_21 = 681747574U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
