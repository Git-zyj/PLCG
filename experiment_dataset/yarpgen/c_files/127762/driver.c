#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6036877470949741840LL;
unsigned short var_7 = (unsigned short)40803;
unsigned int var_8 = 1169883875U;
unsigned int var_10 = 1345374330U;
unsigned long long int var_11 = 12269765375773932791ULL;
short var_12 = (short)8476;
int zero = 0;
unsigned short var_14 = (unsigned short)30309;
unsigned short var_15 = (unsigned short)58512;
long long int var_16 = 452418642859330606LL;
unsigned char var_17 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
