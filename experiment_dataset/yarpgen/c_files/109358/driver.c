#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)62703;
short var_9 = (short)19927;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)26940;
long long int var_12 = -5460825233604868379LL;
int zero = 0;
short var_13 = (short)-27649;
unsigned int var_14 = 155818009U;
long long int var_15 = -8342889438021357135LL;
long long int var_16 = 6075223897558912615LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
