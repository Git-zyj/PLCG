#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
long long int var_5 = -4777791758521557284LL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2352315320U;
unsigned char var_9 = (unsigned char)70;
unsigned short var_12 = (unsigned short)41743;
signed char var_14 = (signed char)5;
unsigned short var_15 = (unsigned short)25250;
unsigned char var_16 = (unsigned char)19;
int zero = 0;
signed char var_17 = (signed char)24;
signed char var_18 = (signed char)75;
long long int var_19 = 4493995269253221958LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
