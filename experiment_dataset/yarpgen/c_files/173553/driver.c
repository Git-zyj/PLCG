#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)4145;
signed char var_7 = (signed char)4;
int var_10 = -146585104;
long long int var_11 = -8819467460428147315LL;
long long int var_13 = 2890719045618397421LL;
unsigned long long int var_19 = 14491121360251044327ULL;
int zero = 0;
short var_20 = (short)-28168;
short var_21 = (short)21543;
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
