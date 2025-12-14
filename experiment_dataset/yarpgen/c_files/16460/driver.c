#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5977425929453938959LL;
long long int var_9 = 7162841268015267595LL;
long long int var_11 = 549330424213850299LL;
unsigned char var_17 = (unsigned char)167;
long long int var_19 = 4905956147286167873LL;
int zero = 0;
unsigned char var_20 = (unsigned char)42;
long long int var_21 = -7850411010637705575LL;
int var_22 = -1505363953;
signed char var_23 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
