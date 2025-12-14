#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2616467377U;
unsigned int var_1 = 1459609609U;
short var_5 = (short)-7038;
int var_11 = -1961457325;
short var_19 = (short)5431;
int zero = 0;
unsigned long long int var_20 = 1272186532603587359ULL;
unsigned short var_21 = (unsigned short)29890;
unsigned long long int var_22 = 1147712963789110226ULL;
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
