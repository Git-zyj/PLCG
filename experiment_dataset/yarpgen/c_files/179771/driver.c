#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
int var_9 = -276510301;
short var_10 = (short)-25664;
unsigned char var_13 = (unsigned char)129;
short var_17 = (short)-26410;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)23;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 1290132550784636259ULL;
unsigned char var_22 = (unsigned char)218;
unsigned long long int var_23 = 2353175830120393975ULL;
long long int var_24 = -5552739643205711749LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
