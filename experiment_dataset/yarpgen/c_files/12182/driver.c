#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
signed char var_2 = (signed char)-54;
short var_5 = (short)2301;
short var_8 = (short)8720;
unsigned long long int var_12 = 5058403093420806384ULL;
long long int var_13 = 5475583041667833697LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2697559825U;
void init() {
}

void checksum() {
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
