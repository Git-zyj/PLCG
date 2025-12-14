#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-9;
unsigned int var_3 = 2360840721U;
unsigned short var_4 = (unsigned short)35953;
long long int var_6 = -8112232586402559878LL;
long long int var_13 = -7695303444057476983LL;
int zero = 0;
signed char var_15 = (signed char)-105;
signed char var_16 = (signed char)99;
long long int var_17 = -3649211715987097903LL;
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
