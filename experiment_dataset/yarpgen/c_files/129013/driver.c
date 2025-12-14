#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1353807381U;
unsigned short var_1 = (unsigned short)9945;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-21;
long long int var_5 = -8596822945730964063LL;
signed char var_6 = (signed char)29;
int zero = 0;
int var_10 = 1322745285;
unsigned long long int var_11 = 12732997360204238831ULL;
long long int var_12 = -1748963518070811619LL;
unsigned short var_13 = (unsigned short)42894;
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
