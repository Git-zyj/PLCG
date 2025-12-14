#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43680;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)252;
unsigned char var_5 = (unsigned char)13;
unsigned char var_6 = (unsigned char)132;
unsigned char var_10 = (unsigned char)74;
long long int var_11 = -709004691155383524LL;
unsigned int var_12 = 2848794344U;
unsigned short var_16 = (unsigned short)34847;
unsigned int var_18 = 2143913828U;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)63501;
_Bool var_21 = (_Bool)0;
long long int var_22 = -9070379243794426113LL;
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
