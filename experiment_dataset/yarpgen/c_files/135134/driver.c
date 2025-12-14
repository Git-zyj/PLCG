#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1596358967;
signed char var_2 = (signed char)114;
unsigned int var_3 = 151778107U;
unsigned char var_6 = (unsigned char)194;
int zero = 0;
unsigned short var_11 = (unsigned short)51182;
short var_12 = (short)-9172;
unsigned long long int var_13 = 9460976211124829496ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
