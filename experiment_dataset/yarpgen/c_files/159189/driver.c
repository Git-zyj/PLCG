#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6555625306559178761ULL;
int var_4 = -883388769;
long long int var_10 = 5069957699617972317LL;
int var_13 = 1357341788;
int var_14 = -1378742524;
int zero = 0;
int var_16 = -1046014250;
int var_17 = -21478674;
int var_18 = -30457868;
unsigned int var_19 = 2110235887U;
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
