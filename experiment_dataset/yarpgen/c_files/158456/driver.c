#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
unsigned short var_5 = (unsigned short)60295;
unsigned int var_6 = 3068093610U;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 9349459050326634728ULL;
unsigned char var_9 = (unsigned char)214;
int zero = 0;
unsigned char var_12 = (unsigned char)188;
long long int var_13 = -6707576173771785180LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
