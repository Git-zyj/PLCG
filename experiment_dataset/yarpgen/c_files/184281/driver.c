#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 6362293993399119629ULL;
unsigned char var_9 = (unsigned char)195;
unsigned char var_11 = (unsigned char)202;
unsigned int var_12 = 3041533554U;
unsigned int var_13 = 2087359356U;
signed char var_14 = (signed char)-90;
unsigned short var_18 = (unsigned short)17017;
long long int var_19 = -3367400256861798688LL;
int zero = 0;
unsigned short var_20 = (unsigned short)49642;
unsigned char var_21 = (unsigned char)191;
unsigned long long int var_22 = 4227861695259907686ULL;
unsigned int var_23 = 3584190494U;
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
