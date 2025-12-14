#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 380216808;
signed char var_3 = (signed char)26;
signed char var_4 = (signed char)74;
int var_5 = -1994095162;
unsigned int var_6 = 195523122U;
signed char var_7 = (signed char)10;
signed char var_8 = (signed char)-111;
unsigned char var_9 = (unsigned char)45;
int zero = 0;
signed char var_10 = (signed char)-41;
int var_11 = -1234704133;
unsigned int var_12 = 2638059762U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
