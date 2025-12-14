#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)89;
signed char var_6 = (signed char)-60;
signed char var_8 = (signed char)38;
unsigned short var_11 = (unsigned short)13585;
signed char var_14 = (signed char)-102;
int zero = 0;
long long int var_15 = -2533429159748218448LL;
unsigned short var_16 = (unsigned short)56475;
unsigned int var_17 = 3518199261U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
