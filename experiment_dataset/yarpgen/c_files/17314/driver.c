#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23136;
unsigned int var_2 = 3736973546U;
unsigned int var_4 = 3451631656U;
unsigned int var_5 = 1560789528U;
long long int var_6 = 2434061068183695557LL;
unsigned int var_7 = 1398242541U;
unsigned char var_8 = (unsigned char)252;
unsigned long long int var_10 = 5533129744094219107ULL;
signed char var_11 = (signed char)-74;
int zero = 0;
unsigned char var_12 = (unsigned char)138;
unsigned long long int var_13 = 3745905042243586382ULL;
short var_14 = (short)3437;
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
