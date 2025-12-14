#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 623111874U;
unsigned char var_5 = (unsigned char)254;
signed char var_7 = (signed char)-13;
int var_8 = 233066723;
int zero = 0;
signed char var_10 = (signed char)-100;
short var_11 = (short)21766;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8417509199864784154LL;
signed char var_14 = (signed char)13;
signed char var_15 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
