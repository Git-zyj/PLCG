#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2095296358U;
unsigned long long int var_7 = 10010122470340642441ULL;
int var_16 = -276969928;
int zero = 0;
int var_17 = 2006497397;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)32;
void init() {
}

void checksum() {
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
