#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
long long int var_2 = -6444113061729520073LL;
unsigned char var_3 = (unsigned char)72;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)236;
unsigned short var_7 = (unsigned short)22234;
signed char var_8 = (signed char)-75;
unsigned int var_9 = 1588175000U;
unsigned char var_12 = (unsigned char)128;
int zero = 0;
unsigned char var_13 = (unsigned char)162;
short var_14 = (short)-16559;
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
