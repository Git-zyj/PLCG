#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2045456564;
signed char var_10 = (signed char)-35;
long long int var_14 = 7181388496826340927LL;
int zero = 0;
unsigned char var_17 = (unsigned char)158;
signed char var_18 = (signed char)-123;
signed char var_19 = (signed char)-34;
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
