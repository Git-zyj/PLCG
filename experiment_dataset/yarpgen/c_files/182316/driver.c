#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26224;
unsigned long long int var_3 = 3270699202003117206ULL;
signed char var_6 = (signed char)-5;
int var_8 = 1908925813;
long long int var_13 = -6552696831928945000LL;
int zero = 0;
unsigned long long int var_14 = 11243771566231959244ULL;
unsigned char var_15 = (unsigned char)18;
unsigned char var_16 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
