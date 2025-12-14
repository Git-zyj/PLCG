#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15127369215220044155ULL;
long long int var_6 = 7485359825879092337LL;
unsigned int var_8 = 1188817464U;
unsigned long long int var_10 = 7956778721729050248ULL;
long long int var_13 = -555559622297213543LL;
unsigned long long int var_15 = 11512570752031409891ULL;
unsigned long long int var_17 = 18167899475257653786ULL;
int zero = 0;
long long int var_18 = -4810232730462565432LL;
unsigned long long int var_19 = 13707353662085283085ULL;
long long int var_20 = 2695418677926050489LL;
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
