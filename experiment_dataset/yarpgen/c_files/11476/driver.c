#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16516;
unsigned long long int var_2 = 14081491494608362677ULL;
short var_3 = (short)-31663;
short var_4 = (short)-18124;
unsigned int var_5 = 3272646627U;
signed char var_7 = (signed char)37;
short var_9 = (short)22124;
int zero = 0;
unsigned long long int var_10 = 264020457352714877ULL;
short var_11 = (short)3596;
unsigned short var_12 = (unsigned short)56381;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
