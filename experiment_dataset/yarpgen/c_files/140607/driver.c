#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)8915;
unsigned char var_5 = (unsigned char)75;
_Bool var_7 = (_Bool)1;
short var_13 = (short)11464;
int zero = 0;
long long int var_14 = -5116565791513400301LL;
unsigned long long int var_15 = 12681972249265203885ULL;
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
