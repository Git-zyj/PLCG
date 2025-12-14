#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39949;
long long int var_2 = -6887952151547116761LL;
long long int var_3 = 8683554491297728575LL;
short var_7 = (short)-31518;
short var_9 = (short)27539;
unsigned short var_10 = (unsigned short)17072;
unsigned int var_11 = 528432110U;
int var_12 = -1845998243;
int zero = 0;
unsigned long long int var_13 = 16755849135745872704ULL;
unsigned long long int var_14 = 5297557648668397891ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
