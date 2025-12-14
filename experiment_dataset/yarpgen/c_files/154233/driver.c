#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)57956;
unsigned short var_6 = (unsigned short)41021;
int var_9 = -481812044;
unsigned long long int var_10 = 8777428953893106761ULL;
short var_12 = (short)-28760;
unsigned long long int var_16 = 6620353756769810693ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-10185;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
