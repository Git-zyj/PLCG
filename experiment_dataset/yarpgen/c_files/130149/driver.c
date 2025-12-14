#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14445493210266131552ULL;
unsigned long long int var_4 = 14962610766777500841ULL;
unsigned long long int var_15 = 7827284023564358116ULL;
unsigned long long int var_16 = 13384561284285074934ULL;
int zero = 0;
unsigned long long int var_19 = 2412846883396326722ULL;
unsigned long long int var_20 = 7445983549134002769ULL;
unsigned long long int var_21 = 3915316207474743120ULL;
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
