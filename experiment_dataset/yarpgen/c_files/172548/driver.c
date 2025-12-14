#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 10594241943449057496ULL;
signed char var_13 = (signed char)8;
int zero = 0;
unsigned long long int var_20 = 16260570944884367968ULL;
long long int var_21 = -4372178950832562846LL;
long long int var_22 = -5699257941506053054LL;
void init() {
}

void checksum() {
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
