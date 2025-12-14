#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)41;
unsigned int var_3 = 967046578U;
unsigned char var_7 = (unsigned char)138;
int var_9 = 322681110;
unsigned short var_11 = (unsigned short)27282;
signed char var_15 = (signed char)43;
unsigned long long int var_16 = 7401361565720433840ULL;
int zero = 0;
int var_17 = 102834374;
unsigned int var_18 = 3609969420U;
unsigned long long int var_19 = 7450297051734341367ULL;
unsigned int var_20 = 1793766953U;
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
