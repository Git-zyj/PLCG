#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6447093227707923335LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)115;
short var_3 = (short)9498;
int zero = 0;
unsigned long long int var_11 = 13004036354281364367ULL;
int var_12 = -720703560;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 14315753893868814960ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
