#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1332653278U;
int var_1 = 1362501443;
long long int var_2 = 3514986569512203208LL;
unsigned char var_3 = (unsigned char)48;
unsigned long long int var_5 = 10467356526843596630ULL;
unsigned int var_7 = 812745677U;
signed char var_10 = (signed char)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)87;
unsigned short var_19 = (unsigned short)60755;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
