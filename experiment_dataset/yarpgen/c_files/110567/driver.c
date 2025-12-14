#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -216286414;
unsigned short var_2 = (unsigned short)3051;
signed char var_3 = (signed char)83;
int var_5 = 2004837757;
unsigned short var_6 = (unsigned short)24493;
unsigned short var_8 = (unsigned short)27924;
unsigned long long int var_9 = 17850546798774096159ULL;
unsigned short var_10 = (unsigned short)29750;
unsigned short var_11 = (unsigned short)63005;
unsigned char var_12 = (unsigned char)243;
int var_13 = 214164676;
unsigned char var_15 = (unsigned char)37;
int zero = 0;
int var_16 = 1968293789;
signed char var_17 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
