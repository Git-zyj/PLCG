#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3329782410U;
unsigned char var_1 = (unsigned char)210;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13373644400985411831ULL;
unsigned short var_7 = (unsigned short)7798;
_Bool var_11 = (_Bool)0;
short var_13 = (short)29177;
unsigned long long int var_15 = 10953073709971668265ULL;
unsigned short var_18 = (unsigned short)60612;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)139;
void init() {
}

void checksum() {
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
