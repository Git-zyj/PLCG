#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6229485992414250502LL;
long long int var_4 = -7740772690510951695LL;
int var_6 = 505542346;
signed char var_7 = (signed char)5;
unsigned short var_9 = (unsigned short)17883;
unsigned long long int var_11 = 6525084295687950678ULL;
int zero = 0;
short var_14 = (short)-3517;
unsigned long long int var_15 = 12855523670967079891ULL;
int var_16 = 581367403;
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
