#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25123;
signed char var_1 = (signed char)-23;
_Bool var_2 = (_Bool)1;
int var_3 = -172254344;
unsigned char var_4 = (unsigned char)184;
short var_6 = (short)32409;
signed char var_7 = (signed char)-83;
int var_8 = 60092710;
int var_9 = -1832136420;
unsigned char var_10 = (unsigned char)59;
int zero = 0;
unsigned char var_12 = (unsigned char)104;
unsigned int var_13 = 2467652049U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
