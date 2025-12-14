#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
unsigned long long int var_3 = 632143139314524902ULL;
unsigned char var_4 = (unsigned char)163;
unsigned short var_6 = (unsigned short)11796;
unsigned long long int var_7 = 568000001135935401ULL;
unsigned char var_8 = (unsigned char)69;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 16701677964249556630ULL;
int var_13 = 337528725;
unsigned int var_17 = 1078422772U;
unsigned char var_18 = (unsigned char)230;
int zero = 0;
int var_19 = 2121685397;
long long int var_20 = 4675024321352284880LL;
long long int var_21 = 5588939651993764356LL;
unsigned char var_22 = (unsigned char)55;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
