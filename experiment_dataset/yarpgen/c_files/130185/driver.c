#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned long long int var_3 = 15411520811605842263ULL;
int var_7 = -254155890;
unsigned long long int var_10 = 9741836183231110144ULL;
long long int var_11 = 3149519699757258341LL;
unsigned char var_15 = (unsigned char)230;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)94;
short var_18 = (short)21832;
long long int var_19 = -9207805366133266636LL;
short var_20 = (short)-19585;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
