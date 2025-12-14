#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1779393012;
long long int var_1 = -938750188644950297LL;
long long int var_3 = 6490718082073322734LL;
unsigned short var_4 = (unsigned short)55094;
unsigned int var_6 = 569491961U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)57;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 3804474390680163971ULL;
unsigned char var_21 = (unsigned char)125;
unsigned int var_22 = 2719746692U;
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
