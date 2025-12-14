#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-80;
unsigned short var_5 = (unsigned short)58348;
signed char var_6 = (signed char)-39;
long long int var_7 = 4940478404099604540LL;
int var_8 = 453604903;
signed char var_10 = (signed char)7;
unsigned short var_12 = (unsigned short)60205;
short var_13 = (short)818;
unsigned long long int var_14 = 10038818058739510615ULL;
unsigned long long int var_15 = 10404523077485804653ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)45;
_Bool var_17 = (_Bool)0;
int var_18 = -118279070;
int var_19 = -375936119;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
