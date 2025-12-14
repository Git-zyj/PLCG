#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40382;
unsigned short var_6 = (unsigned short)57329;
short var_7 = (short)-18305;
long long int var_8 = -8968321360432099921LL;
long long int var_9 = -2619221710508059782LL;
int zero = 0;
long long int var_13 = -3695447175652354801LL;
signed char var_14 = (signed char)-73;
_Bool var_15 = (_Bool)1;
int var_16 = 682678110;
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
