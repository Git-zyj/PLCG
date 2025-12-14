#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
int var_1 = -2105295394;
short var_3 = (short)25975;
int var_5 = -238609276;
int var_6 = -611585445;
signed char var_7 = (signed char)-35;
long long int var_8 = -354688667674529612LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6969091505982913855LL;
_Bool var_11 = (_Bool)0;
long long int var_13 = -1112355261260879587LL;
signed char var_14 = (signed char)76;
signed char var_15 = (signed char)68;
int var_16 = -755951552;
unsigned char var_19 = (unsigned char)217;
int zero = 0;
long long int var_20 = -5969295605396908308LL;
long long int var_21 = 1282264184633588007LL;
long long int var_22 = 2188707136177386052LL;
unsigned int var_23 = 3756275710U;
void init() {
}

void checksum() {
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
