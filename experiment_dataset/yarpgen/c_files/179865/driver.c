#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)220;
unsigned short var_5 = (unsigned short)42495;
unsigned long long int var_9 = 16133617402422492931ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_16 = 3207584516U;
int zero = 0;
signed char var_19 = (signed char)-4;
signed char var_20 = (signed char)17;
signed char var_21 = (signed char)-79;
unsigned long long int var_22 = 13432967728732160091ULL;
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
