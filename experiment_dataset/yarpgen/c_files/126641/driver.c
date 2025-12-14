#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned char var_3 = (unsigned char)37;
_Bool var_4 = (_Bool)1;
int var_6 = -1421996719;
signed char var_7 = (signed char)-38;
unsigned char var_11 = (unsigned char)231;
int var_15 = 571787925;
unsigned char var_18 = (unsigned char)89;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)91;
int var_22 = 1088701744;
unsigned char var_23 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
