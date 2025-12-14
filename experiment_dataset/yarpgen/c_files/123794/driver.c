#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1595529938210904442LL;
long long int var_3 = -5423948996780658122LL;
short var_4 = (short)-428;
unsigned char var_6 = (unsigned char)35;
signed char var_7 = (signed char)-47;
unsigned short var_8 = (unsigned short)63772;
unsigned char var_9 = (unsigned char)92;
unsigned char var_10 = (unsigned char)76;
long long int var_11 = -951790170090391200LL;
unsigned short var_12 = (unsigned short)23995;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)-17;
unsigned char var_16 = (unsigned char)162;
int zero = 0;
short var_17 = (short)-16648;
signed char var_18 = (signed char)-54;
unsigned char var_19 = (unsigned char)167;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1315708953U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
