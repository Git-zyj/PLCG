#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46838;
signed char var_2 = (signed char)2;
signed char var_5 = (signed char)-104;
int var_8 = -1196168563;
unsigned long long int var_13 = 17123699320709277301ULL;
int zero = 0;
int var_17 = -606815906;
unsigned short var_18 = (unsigned short)55806;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
