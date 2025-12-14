#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
long long int var_3 = 6640332445387242588LL;
int var_6 = -1439528036;
int var_9 = 5931760;
unsigned char var_10 = (unsigned char)125;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-115;
long long int var_16 = -6557488377665951545LL;
int var_18 = 1781753979;
int zero = 0;
signed char var_20 = (signed char)-117;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1933502279U;
unsigned int var_23 = 3915893060U;
signed char var_24 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
