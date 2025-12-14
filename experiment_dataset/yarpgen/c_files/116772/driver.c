#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21410;
long long int var_2 = -730722224736710148LL;
unsigned char var_3 = (unsigned char)50;
unsigned char var_6 = (unsigned char)179;
unsigned int var_7 = 4135611918U;
long long int var_10 = 4660314803117155037LL;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 1541819229U;
int zero = 0;
signed char var_17 = (signed char)66;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)150;
signed char var_20 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
