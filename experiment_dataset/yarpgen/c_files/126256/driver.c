#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
unsigned char var_5 = (unsigned char)224;
long long int var_9 = -5445419587186730321LL;
unsigned short var_10 = (unsigned short)53446;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3196786652U;
unsigned char var_14 = (unsigned char)24;
void init() {
}

void checksum() {
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
