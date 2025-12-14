#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17977;
long long int var_2 = 4649513786165194026LL;
unsigned short var_5 = (unsigned short)60727;
int var_6 = -466917984;
unsigned short var_9 = (unsigned short)35702;
signed char var_13 = (signed char)-38;
int zero = 0;
unsigned char var_18 = (unsigned char)253;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7398513883917984159LL;
long long int var_21 = -779517999709995809LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
