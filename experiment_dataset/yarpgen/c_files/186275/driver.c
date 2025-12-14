#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned long long int var_1 = 1392186502056518652ULL;
short var_2 = (short)-14644;
int var_3 = 1202458348;
short var_4 = (short)11301;
signed char var_5 = (signed char)-92;
unsigned long long int var_6 = 5340135367489290855ULL;
short var_7 = (short)8865;
short var_14 = (short)6956;
int zero = 0;
unsigned long long int var_15 = 3115483121887423138ULL;
int var_16 = -2026896860;
unsigned long long int var_17 = 18137608064848587282ULL;
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
