#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned short var_2 = (unsigned short)49619;
unsigned short var_10 = (unsigned short)37385;
unsigned int var_17 = 491004950U;
int zero = 0;
unsigned long long int var_19 = 7856610584238903418ULL;
int var_20 = -385549601;
int var_21 = -2119514925;
unsigned long long int var_22 = 10667624646291826901ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
