#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)100;
unsigned int var_4 = 3941785560U;
unsigned short var_6 = (unsigned short)46432;
long long int var_7 = 5184349795535990410LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)6406;
long long int var_11 = -3471375090021233045LL;
unsigned long long int var_13 = 777094832337985369ULL;
unsigned long long int var_15 = 7451757782477521746ULL;
unsigned char var_17 = (unsigned char)202;
int zero = 0;
signed char var_18 = (signed char)-61;
unsigned int var_19 = 208926804U;
void init() {
}

void checksum() {
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
