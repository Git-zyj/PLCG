#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4712420137643966882LL;
int var_1 = 942966448;
unsigned int var_2 = 2684784839U;
long long int var_4 = 5467607559332289295LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 7175448962948444711ULL;
unsigned int var_15 = 1163677147U;
int var_17 = 93633833;
int zero = 0;
signed char var_19 = (signed char)-113;
_Bool var_20 = (_Bool)0;
long long int var_21 = 7038809616528805081LL;
int var_22 = -854316369;
_Bool var_23 = (_Bool)1;
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
