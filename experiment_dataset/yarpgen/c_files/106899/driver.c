#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 880056919;
signed char var_2 = (signed char)60;
signed char var_8 = (signed char)-65;
unsigned char var_9 = (unsigned char)208;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 1309084165;
_Bool var_16 = (_Bool)0;
int var_17 = -1071963375;
unsigned char var_18 = (unsigned char)138;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
