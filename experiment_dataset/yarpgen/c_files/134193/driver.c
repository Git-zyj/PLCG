#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-39;
signed char var_2 = (signed char)-48;
unsigned short var_9 = (unsigned short)29206;
unsigned short var_11 = (unsigned short)32060;
signed char var_12 = (signed char)120;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)153;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)99;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
