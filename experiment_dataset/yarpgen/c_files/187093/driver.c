#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)254;
long long int var_1 = -7608684317680974018LL;
unsigned int var_8 = 204179719U;
unsigned char var_11 = (unsigned char)74;
signed char var_13 = (signed char)62;
unsigned char var_17 = (unsigned char)220;
int zero = 0;
unsigned short var_19 = (unsigned short)5725;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
