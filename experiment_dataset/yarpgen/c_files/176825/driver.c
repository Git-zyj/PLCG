#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9679;
unsigned long long int var_5 = 4094539692167404530ULL;
signed char var_8 = (signed char)-27;
unsigned short var_15 = (unsigned short)20955;
int zero = 0;
signed char var_20 = (signed char)-42;
int var_21 = 1207309792;
unsigned long long int var_22 = 1297125617057677626ULL;
unsigned short var_23 = (unsigned short)56697;
unsigned char var_24 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
