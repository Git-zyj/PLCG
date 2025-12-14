#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59547;
int var_6 = 1288676121;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-8;
int zero = 0;
unsigned char var_16 = (unsigned char)195;
_Bool var_17 = (_Bool)0;
int var_18 = -257880749;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
