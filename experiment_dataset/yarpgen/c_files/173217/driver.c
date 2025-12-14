#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8220;
signed char var_4 = (signed char)-49;
int var_5 = 1269246361;
int var_7 = 1762739907;
short var_8 = (short)2839;
long long int var_11 = -8838628729340509724LL;
int zero = 0;
unsigned short var_16 = (unsigned short)19346;
long long int var_17 = -314321750347331227LL;
_Bool var_18 = (_Bool)1;
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
