#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
long long int var_2 = 6486968451997582001LL;
long long int var_3 = 6854973635542508690LL;
unsigned int var_4 = 3934368484U;
long long int var_5 = -3445343336589846864LL;
long long int var_7 = 7039030067623586900LL;
short var_9 = (short)-22651;
unsigned char var_10 = (unsigned char)130;
int zero = 0;
unsigned short var_12 = (unsigned short)48606;
long long int var_13 = 3981737323571341729LL;
void init() {
}

void checksum() {
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
