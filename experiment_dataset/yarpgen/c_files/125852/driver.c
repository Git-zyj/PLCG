#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18697;
unsigned long long int var_1 = 5051897804058432441ULL;
unsigned long long int var_5 = 9501932376425988591ULL;
signed char var_6 = (signed char)82;
int var_8 = -2060727874;
unsigned int var_9 = 308531106U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)51420;
int zero = 0;
unsigned char var_12 = (unsigned char)138;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
