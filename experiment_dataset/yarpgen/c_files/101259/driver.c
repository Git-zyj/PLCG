#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40711;
int var_1 = -380525741;
unsigned int var_2 = 3627543671U;
unsigned short var_3 = (unsigned short)57503;
unsigned char var_6 = (unsigned char)96;
signed char var_7 = (signed char)-62;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 2052815168;
signed char var_12 = (signed char)-75;
short var_13 = (short)15427;
unsigned int var_14 = 2564976028U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
