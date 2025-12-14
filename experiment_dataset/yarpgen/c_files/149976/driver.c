#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 174450250640583131ULL;
unsigned long long int var_8 = 8664658220760579427ULL;
long long int var_15 = -5206873149651908320LL;
int zero = 0;
unsigned long long int var_18 = 2510628589923148105ULL;
unsigned long long int var_19 = 5778591791529025895ULL;
unsigned short var_20 = (unsigned short)55903;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
