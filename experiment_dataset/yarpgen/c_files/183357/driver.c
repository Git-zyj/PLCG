#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 746606669;
unsigned long long int var_4 = 15227502383132287335ULL;
int var_6 = -1828960504;
signed char var_7 = (signed char)-48;
signed char var_8 = (signed char)-16;
signed char var_9 = (signed char)-85;
long long int var_13 = 7637570835793840015LL;
int zero = 0;
int var_14 = -573406021;
unsigned long long int var_15 = 5983369697422691480ULL;
int var_16 = 1413895590;
unsigned long long int var_17 = 9187451219188783405ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
