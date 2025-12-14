#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1354526976;
long long int var_10 = 7896574751334890378LL;
unsigned long long int var_14 = 6359866912637538791ULL;
unsigned int var_15 = 3602071479U;
int zero = 0;
long long int var_16 = 5714179633843594893LL;
unsigned char var_17 = (unsigned char)101;
int var_18 = -1432085815;
int var_19 = -1048346529;
unsigned long long int var_20 = 8620415390319822190ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
