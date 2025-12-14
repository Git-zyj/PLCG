#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1017890439950549884LL;
long long int var_9 = 3239244063708006929LL;
unsigned long long int var_12 = 9596098628103538728ULL;
unsigned char var_16 = (unsigned char)196;
unsigned char var_18 = (unsigned char)205;
int zero = 0;
long long int var_19 = -1000361111835733981LL;
long long int var_20 = -6905549287109018497LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-73;
long long int var_23 = 2040060356599759570LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
