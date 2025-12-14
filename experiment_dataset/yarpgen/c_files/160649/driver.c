#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31068;
long long int var_1 = -5606953836850910719LL;
unsigned long long int var_3 = 2099877889405711842ULL;
unsigned long long int var_4 = 2557297316169510502ULL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3179777259536470110LL;
signed char var_13 = (signed char)-56;
unsigned char var_15 = (unsigned char)237;
int zero = 0;
short var_16 = (short)-16504;
short var_17 = (short)-27130;
short var_18 = (short)2551;
short var_19 = (short)16786;
int var_20 = -1782489898;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
