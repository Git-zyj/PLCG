#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 825104931;
unsigned long long int var_3 = 15013836969488155803ULL;
unsigned long long int var_7 = 3920580619254362545ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3538946501U;
long long int var_10 = -304746858423968855LL;
int zero = 0;
unsigned int var_12 = 2501516836U;
int var_13 = 1793523593;
long long int var_14 = 6088524905449762321LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
