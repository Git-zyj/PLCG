#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)120;
long long int var_8 = 5877119166255264977LL;
long long int var_9 = 8588182081881511358LL;
unsigned char var_17 = (unsigned char)172;
int zero = 0;
unsigned int var_20 = 441014866U;
int var_21 = 606696736;
signed char var_22 = (signed char)77;
short var_23 = (short)-14082;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
