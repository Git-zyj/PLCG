#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22829;
unsigned short var_3 = (unsigned short)10524;
signed char var_4 = (signed char)-79;
unsigned short var_8 = (unsigned short)20060;
unsigned short var_10 = (unsigned short)8745;
unsigned char var_12 = (unsigned char)108;
unsigned int var_14 = 1769325683U;
long long int var_15 = -1618399823248961943LL;
unsigned int var_17 = 513807875U;
int zero = 0;
unsigned char var_18 = (unsigned char)62;
signed char var_19 = (signed char)-42;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)205;
long long int var_22 = -4522525533670995227LL;
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
