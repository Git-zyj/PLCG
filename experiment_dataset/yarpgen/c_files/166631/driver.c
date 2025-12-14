#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
unsigned int var_2 = 2026253396U;
long long int var_3 = 2556776860905673693LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)144;
unsigned long long int var_12 = 17120894749419203820ULL;
int zero = 0;
unsigned long long int var_13 = 4972366080745949067ULL;
unsigned short var_14 = (unsigned short)27709;
unsigned short var_15 = (unsigned short)3263;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
