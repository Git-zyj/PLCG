#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16989480875192715300ULL;
long long int var_2 = 3200968061478377983LL;
unsigned int var_4 = 1825037770U;
long long int var_6 = -2880077428011412238LL;
unsigned int var_9 = 2166463992U;
unsigned char var_10 = (unsigned char)36;
long long int var_13 = 7354676395232317722LL;
unsigned int var_14 = 2407158014U;
int zero = 0;
unsigned char var_20 = (unsigned char)87;
int var_21 = 251158649;
unsigned int var_22 = 204836079U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
