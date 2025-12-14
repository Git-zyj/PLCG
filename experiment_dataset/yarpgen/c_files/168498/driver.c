#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)89;
unsigned int var_8 = 1988470951U;
unsigned char var_10 = (unsigned char)108;
short var_11 = (short)-5226;
signed char var_13 = (signed char)64;
int zero = 0;
unsigned char var_14 = (unsigned char)224;
int var_15 = 1466803708;
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
