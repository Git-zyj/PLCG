#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-100;
_Bool var_6 = (_Bool)1;
int var_7 = 1801842736;
unsigned int var_10 = 1071231234U;
unsigned int var_11 = 1361975407U;
int zero = 0;
short var_13 = (short)-3652;
unsigned char var_14 = (unsigned char)188;
unsigned int var_15 = 47070020U;
long long int var_16 = 7513612974967907989LL;
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
