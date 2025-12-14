#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
unsigned long long int var_4 = 13196778706623629199ULL;
signed char var_5 = (signed char)29;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 14464464843763256936ULL;
unsigned short var_13 = (unsigned short)55735;
int var_14 = -1721281588;
int zero = 0;
unsigned char var_15 = (unsigned char)179;
unsigned char var_16 = (unsigned char)74;
int var_17 = -1575312734;
signed char var_18 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
