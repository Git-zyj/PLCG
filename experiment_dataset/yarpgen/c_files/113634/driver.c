#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40831;
signed char var_2 = (signed char)114;
unsigned int var_3 = 3276970694U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)7294;
unsigned long long int var_8 = 14655231078447510237ULL;
short var_9 = (short)13692;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)27;
unsigned long long int var_12 = 4726852147710685559ULL;
unsigned short var_13 = (unsigned short)7732;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
