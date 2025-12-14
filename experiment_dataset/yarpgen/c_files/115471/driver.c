#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25327;
long long int var_3 = 5784771977325959499LL;
unsigned long long int var_7 = 3296190852364313642ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_11 = -447307488;
unsigned char var_12 = (unsigned char)24;
long long int var_13 = -4486452440420791064LL;
unsigned short var_14 = (unsigned short)53982;
unsigned int var_15 = 2665277279U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
