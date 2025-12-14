#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)2662;
unsigned char var_7 = (unsigned char)220;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)12561;
signed char var_11 = (signed char)-44;
signed char var_13 = (signed char)111;
int zero = 0;
unsigned short var_14 = (unsigned short)9585;
unsigned char var_15 = (unsigned char)185;
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
