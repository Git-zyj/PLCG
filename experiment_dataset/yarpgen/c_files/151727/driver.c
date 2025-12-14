#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8361991313320970113LL;
signed char var_4 = (signed char)29;
unsigned int var_6 = 559981780U;
short var_7 = (short)279;
long long int var_12 = -7852348072825101447LL;
int zero = 0;
unsigned long long int var_20 = 9454000123280974267ULL;
unsigned char var_21 = (unsigned char)204;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
