#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)44;
int var_7 = -381847451;
long long int var_9 = -4019078588368020813LL;
_Bool var_10 = (_Bool)1;
short var_14 = (short)29257;
signed char var_18 = (signed char)10;
int zero = 0;
short var_19 = (short)-1906;
long long int var_20 = 2192250691283130995LL;
unsigned int var_21 = 3566021953U;
unsigned long long int var_22 = 16027097531429271152ULL;
int var_23 = 804719227;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
