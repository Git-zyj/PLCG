#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5950;
short var_2 = (short)15884;
signed char var_3 = (signed char)-15;
unsigned short var_6 = (unsigned short)59025;
unsigned int var_7 = 3810471313U;
signed char var_8 = (signed char)-80;
unsigned long long int var_9 = 7431985335315828269ULL;
short var_10 = (short)-16059;
long long int var_11 = -1284575576150861499LL;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7131210544327281453ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1460554850U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
