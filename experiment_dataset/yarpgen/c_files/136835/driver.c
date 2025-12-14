#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)713;
unsigned int var_4 = 2596956882U;
short var_6 = (short)-9334;
_Bool var_9 = (_Bool)0;
unsigned short var_12 = (unsigned short)14664;
signed char var_13 = (signed char)94;
unsigned char var_14 = (unsigned char)221;
int zero = 0;
long long int var_18 = -4209834461737583246LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
