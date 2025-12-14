#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)124;
int var_9 = -261738265;
signed char var_10 = (signed char)86;
long long int var_11 = 458544121246179292LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4143065358U;
unsigned int var_14 = 2563175898U;
int var_16 = 1105129026;
int zero = 0;
long long int var_17 = -8198277444410574834LL;
unsigned char var_18 = (unsigned char)193;
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
