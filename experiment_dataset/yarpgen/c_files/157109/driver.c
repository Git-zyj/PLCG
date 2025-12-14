#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)32314;
unsigned int var_7 = 2811601003U;
int zero = 0;
signed char var_17 = (signed char)77;
long long int var_18 = -7143885909738245732LL;
unsigned short var_19 = (unsigned short)44200;
short var_20 = (short)25234;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
