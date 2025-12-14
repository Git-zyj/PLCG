#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15364168072705158836ULL;
int var_1 = -1364087604;
_Bool var_6 = (_Bool)0;
int var_7 = -452195784;
unsigned char var_8 = (unsigned char)7;
int var_10 = 1786783476;
int zero = 0;
signed char var_14 = (signed char)-75;
int var_15 = -1102863285;
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
