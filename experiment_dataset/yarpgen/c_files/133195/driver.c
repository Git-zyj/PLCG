#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
unsigned long long int var_1 = 15348274641268166167ULL;
int var_2 = -29156483;
signed char var_5 = (signed char)87;
_Bool var_6 = (_Bool)1;
short var_7 = (short)1609;
int zero = 0;
unsigned int var_13 = 3542803123U;
unsigned short var_14 = (unsigned short)14695;
void init() {
}

void checksum() {
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
