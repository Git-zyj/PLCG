#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1376982293808186282LL;
signed char var_3 = (signed char)-59;
unsigned long long int var_5 = 1212413327438996668ULL;
long long int var_6 = 6428783376957098758LL;
long long int var_9 = -585421458785035289LL;
long long int var_10 = -3659465404866515536LL;
int zero = 0;
int var_13 = -681635216;
unsigned long long int var_14 = 8140723017283530402ULL;
void init() {
}

void checksum() {
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
