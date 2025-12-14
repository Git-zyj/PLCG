#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32746;
unsigned long long int var_3 = 10496083747218404268ULL;
unsigned short var_4 = (unsigned short)55430;
short var_7 = (short)-5098;
unsigned int var_8 = 2994152652U;
long long int var_9 = -6207952114326764462LL;
unsigned int var_14 = 1258688507U;
int zero = 0;
unsigned char var_17 = (unsigned char)120;
unsigned short var_18 = (unsigned short)42147;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)57;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
