#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 466408951U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11199226667881462878ULL;
long long int var_10 = -4465363011782132452LL;
unsigned short var_16 = (unsigned short)57946;
int zero = 0;
signed char var_18 = (signed char)49;
signed char var_19 = (signed char)-106;
unsigned char var_20 = (unsigned char)58;
void init() {
}

void checksum() {
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
