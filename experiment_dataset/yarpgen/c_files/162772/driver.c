#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4755247770859170198LL;
short var_1 = (short)-6687;
unsigned char var_3 = (unsigned char)134;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1259419977U;
int var_12 = -388797105;
int var_13 = -1783015549;
unsigned short var_15 = (unsigned short)37312;
unsigned char var_16 = (unsigned char)192;
int zero = 0;
long long int var_18 = -1768770371963096230LL;
unsigned char var_19 = (unsigned char)245;
_Bool var_20 = (_Bool)0;
short var_21 = (short)18353;
unsigned int var_22 = 4194760736U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
