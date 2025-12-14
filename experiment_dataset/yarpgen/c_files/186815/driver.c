#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8904282894297201828LL;
short var_5 = (short)6178;
short var_11 = (short)7702;
unsigned long long int var_14 = 16921817689341135919ULL;
short var_17 = (short)-17558;
int zero = 0;
short var_19 = (short)27605;
long long int var_20 = 3933185537788128526LL;
short var_21 = (short)27441;
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
