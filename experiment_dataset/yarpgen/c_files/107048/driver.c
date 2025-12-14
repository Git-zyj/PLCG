#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 797298702U;
signed char var_8 = (signed char)-72;
unsigned char var_9 = (unsigned char)244;
long long int var_12 = 2137629759553052093LL;
unsigned char var_17 = (unsigned char)177;
unsigned char var_18 = (unsigned char)161;
short var_19 = (short)23931;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)247;
signed char var_22 = (signed char)-23;
void init() {
}

void checksum() {
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
