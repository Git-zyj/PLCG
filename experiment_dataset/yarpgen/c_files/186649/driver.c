#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2431139948537565298LL;
int var_8 = 657809853;
unsigned short var_9 = (unsigned short)18802;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17901093959339466014ULL;
long long int var_14 = 2629166017230003013LL;
int var_16 = 1844568620;
int zero = 0;
unsigned long long int var_17 = 15848078567983527338ULL;
signed char var_18 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
