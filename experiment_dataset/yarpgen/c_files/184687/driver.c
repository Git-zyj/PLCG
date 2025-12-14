#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2823929234U;
long long int var_2 = 2789496075352342830LL;
unsigned short var_3 = (unsigned short)30781;
unsigned int var_4 = 468119869U;
unsigned int var_5 = 1578445709U;
unsigned long long int var_6 = 15906146591285986070ULL;
long long int var_8 = -7726265068405067750LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-13062;
int zero = 0;
long long int var_11 = 13464073770880744LL;
unsigned short var_12 = (unsigned short)34394;
unsigned long long int var_13 = 16521484299849771934ULL;
unsigned short var_14 = (unsigned short)34946;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
