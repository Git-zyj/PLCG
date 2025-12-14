#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3249949210644495299LL;
long long int var_1 = -7225385152799537610LL;
long long int var_2 = 3105126311583822962LL;
unsigned long long int var_4 = 9697013147383250646ULL;
long long int var_5 = 347415895540734142LL;
int var_7 = -1162263986;
unsigned char var_8 = (unsigned char)128;
int zero = 0;
long long int var_10 = 1246394433930031303LL;
int var_11 = 589953887;
unsigned char var_12 = (unsigned char)174;
unsigned int var_13 = 694352081U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
