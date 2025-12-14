#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-71;
unsigned char var_6 = (unsigned char)136;
signed char var_8 = (signed char)-83;
unsigned long long int var_9 = 12135038928969483253ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)134;
unsigned char var_15 = (unsigned char)95;
unsigned char var_16 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
