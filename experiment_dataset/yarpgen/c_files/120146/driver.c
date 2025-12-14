#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)116;
unsigned long long int var_4 = 8048929052584670619ULL;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
unsigned char var_17 = (unsigned char)60;
signed char var_18 = (signed char)54;
long long int var_19 = 4362020269734733267LL;
void init() {
}

void checksum() {
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
