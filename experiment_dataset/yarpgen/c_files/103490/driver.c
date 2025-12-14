#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned int var_1 = 4174051505U;
short var_4 = (short)-18325;
unsigned short var_5 = (unsigned short)52645;
unsigned short var_6 = (unsigned short)15790;
unsigned int var_7 = 310970791U;
unsigned long long int var_9 = 15327367313354204835ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 98575273U;
signed char var_18 = (signed char)114;
long long int var_19 = -8118011742203070813LL;
long long int var_20 = 5508723923062294188LL;
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
