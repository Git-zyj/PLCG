#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-21;
signed char var_2 = (signed char)-15;
unsigned int var_3 = 2921760205U;
signed char var_4 = (signed char)-68;
unsigned long long int var_6 = 13173233836748422733ULL;
unsigned char var_7 = (unsigned char)194;
unsigned int var_8 = 1276251457U;
signed char var_9 = (signed char)-37;
signed char var_10 = (signed char)59;
int zero = 0;
unsigned short var_11 = (unsigned short)29387;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3490612964U;
unsigned int var_14 = 2334175982U;
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
