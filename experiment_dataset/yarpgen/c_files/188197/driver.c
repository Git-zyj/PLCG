#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)102;
signed char var_3 = (signed char)75;
unsigned long long int var_5 = 13546741841095146664ULL;
signed char var_9 = (signed char)68;
signed char var_10 = (signed char)89;
int var_11 = -380088268;
int zero = 0;
unsigned long long int var_13 = 12431918308540439405ULL;
unsigned short var_14 = (unsigned short)14411;
long long int var_15 = 4904250764720753811LL;
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
