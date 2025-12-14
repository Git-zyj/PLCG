#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3305;
int var_3 = -758226338;
unsigned int var_7 = 3680220290U;
unsigned short var_8 = (unsigned short)57844;
unsigned short var_12 = (unsigned short)43794;
unsigned long long int var_13 = 4998313162117190025ULL;
int zero = 0;
signed char var_15 = (signed char)32;
unsigned short var_16 = (unsigned short)14944;
short var_17 = (short)16372;
unsigned int var_18 = 2216599094U;
unsigned long long int var_19 = 11077325282104854790ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
