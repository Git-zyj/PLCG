#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11244;
long long int var_1 = 1222865717604133241LL;
long long int var_2 = -5666534802553192214LL;
long long int var_8 = -905794435808990679LL;
long long int var_11 = -4690005324883915426LL;
long long int var_12 = 823049709963310268LL;
int zero = 0;
long long int var_15 = -9222852627076103123LL;
long long int var_16 = 5851897680520680702LL;
long long int var_17 = -9150592176389166261LL;
long long int var_18 = 2839594200343457350LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
