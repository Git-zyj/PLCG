#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 667308902U;
short var_1 = (short)13132;
unsigned short var_4 = (unsigned short)11651;
unsigned short var_7 = (unsigned short)54432;
short var_9 = (short)-32446;
_Bool var_10 = (_Bool)1;
unsigned int var_15 = 172128040U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_19 = 17315695780247215071ULL;
int zero = 0;
int var_20 = 1026378338;
unsigned long long int var_21 = 3381797523107245339ULL;
_Bool var_22 = (_Bool)0;
int var_23 = 1389746992;
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
