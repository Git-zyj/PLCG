#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)32597;
unsigned int var_5 = 967763225U;
unsigned short var_6 = (unsigned short)46870;
unsigned long long int var_7 = 4283873776743815169ULL;
long long int var_8 = 5595621999155430061LL;
unsigned int var_9 = 1209099542U;
unsigned int var_10 = 1404728609U;
unsigned short var_11 = (unsigned short)1144;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12069795718642783546ULL;
unsigned short var_14 = (unsigned short)48294;
_Bool var_17 = (_Bool)0;
int var_18 = -85446358;
int zero = 0;
unsigned long long int var_19 = 559773348426154386ULL;
unsigned short var_20 = (unsigned short)50055;
unsigned short var_21 = (unsigned short)52127;
unsigned long long int var_22 = 12846616327239056211ULL;
unsigned int var_23 = 375420202U;
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
