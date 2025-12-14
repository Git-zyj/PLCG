#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15173;
unsigned int var_3 = 3610053995U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17996643384814933320ULL;
int var_6 = -40872392;
int var_7 = 484920797;
long long int var_9 = -963465552374594896LL;
int zero = 0;
long long int var_10 = -357161709737795929LL;
int var_11 = 1339675041;
unsigned char var_12 = (unsigned char)184;
short var_13 = (short)-9514;
long long int var_14 = -752323130337815051LL;
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
