#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2964333353U;
long long int var_1 = -489254709631285193LL;
unsigned int var_2 = 3807972565U;
short var_3 = (short)29130;
short var_6 = (short)29093;
short var_7 = (short)-24353;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 15418953374647382079ULL;
unsigned long long int var_11 = 9715903666378681426ULL;
unsigned char var_12 = (unsigned char)203;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
