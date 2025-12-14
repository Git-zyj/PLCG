#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7878745286567956345LL;
int var_1 = -252122588;
unsigned int var_5 = 853360230U;
unsigned int var_8 = 395923422U;
long long int var_9 = -1040686236060295312LL;
unsigned int var_12 = 1410770452U;
long long int var_14 = -3592013999361595100LL;
long long int var_15 = 7183665962361219721LL;
int var_16 = 231451379;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)113;
unsigned int var_21 = 2706560337U;
short var_22 = (short)10562;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
