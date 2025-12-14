#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)23;
short var_11 = (short)-14024;
int zero = 0;
signed char var_19 = (signed char)-16;
short var_20 = (short)26753;
long long int var_21 = 2900671027777808256LL;
signed char var_22 = (signed char)112;
unsigned char var_23 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
