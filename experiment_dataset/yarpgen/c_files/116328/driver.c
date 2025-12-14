#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33547;
unsigned long long int var_7 = 16065357506369319483ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = 1819359981;
unsigned long long int var_17 = 7227073494307147603ULL;
unsigned short var_18 = (unsigned short)65146;
int var_19 = -2065442900;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
