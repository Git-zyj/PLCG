#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)26102;
unsigned int var_5 = 1133734875U;
short var_11 = (short)-25182;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 5568493209793700788ULL;
signed char var_17 = (signed char)108;
long long int var_18 = 670512492964591216LL;
int var_19 = 210281072;
void init() {
}

void checksum() {
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
