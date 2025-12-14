#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1415916809;
short var_6 = (short)8172;
long long int var_8 = 326200866849966198LL;
short var_9 = (short)19563;
long long int var_10 = -3232480028533953134LL;
short var_11 = (short)-16426;
int zero = 0;
unsigned long long int var_12 = 1753559792221099510ULL;
long long int var_13 = -7195285345709183908LL;
long long int var_14 = -2909686966230754212LL;
long long int var_15 = 6591918233438988386LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
