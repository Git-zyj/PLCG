#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1274613392;
int var_4 = -994164531;
signed char var_7 = (signed char)-91;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 12917788884505005498ULL;
unsigned int var_14 = 2986995941U;
signed char var_18 = (signed char)-34;
int zero = 0;
unsigned char var_19 = (unsigned char)1;
int var_20 = 1090516615;
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
