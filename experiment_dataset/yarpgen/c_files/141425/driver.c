#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
unsigned char var_1 = (unsigned char)239;
long long int var_14 = 7185146209175684911LL;
int zero = 0;
short var_19 = (short)-20759;
unsigned char var_20 = (unsigned char)170;
signed char var_21 = (signed char)49;
long long int var_22 = 5345644342781338660LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
