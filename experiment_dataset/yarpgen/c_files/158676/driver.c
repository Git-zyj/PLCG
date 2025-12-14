#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1823078114U;
unsigned long long int var_1 = 7857570849215181061ULL;
unsigned int var_5 = 3641825859U;
long long int var_10 = 2799202589035416359LL;
unsigned long long int var_11 = 5095269245959922693ULL;
long long int var_13 = -2655381347379898642LL;
int var_14 = -388401029;
int var_15 = 2082458675;
int zero = 0;
long long int var_19 = 7821409605296129256LL;
unsigned int var_20 = 800789229U;
unsigned int var_21 = 3635530661U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
