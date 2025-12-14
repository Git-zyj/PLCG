#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1339616028;
unsigned short var_4 = (unsigned short)35985;
long long int var_7 = 43498188495299181LL;
int var_8 = -634212221;
unsigned char var_9 = (unsigned char)198;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)189;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)23089;
long long int var_17 = 1532234022838698659LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
