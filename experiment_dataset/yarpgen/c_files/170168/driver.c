#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
unsigned long long int var_1 = 16659383338903421059ULL;
unsigned int var_2 = 676376512U;
unsigned int var_5 = 3399658003U;
_Bool var_10 = (_Bool)1;
short var_11 = (short)11715;
unsigned short var_12 = (unsigned short)24045;
unsigned char var_14 = (unsigned char)3;
unsigned long long int var_17 = 13870911720620546825ULL;
int zero = 0;
short var_18 = (short)8390;
unsigned short var_19 = (unsigned short)9562;
_Bool var_20 = (_Bool)0;
long long int var_21 = -2029073693249969612LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
