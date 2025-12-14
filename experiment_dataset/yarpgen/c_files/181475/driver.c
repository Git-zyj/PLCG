#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)9;
unsigned short var_4 = (unsigned short)56592;
unsigned long long int var_6 = 13077434266477703186ULL;
unsigned short var_7 = (unsigned short)64027;
unsigned long long int var_8 = 13363845097584733937ULL;
int zero = 0;
long long int var_10 = -1369424251323137541LL;
unsigned int var_11 = 1393159794U;
long long int var_12 = 2695575980595728125LL;
long long int var_13 = -7884285695687795199LL;
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
