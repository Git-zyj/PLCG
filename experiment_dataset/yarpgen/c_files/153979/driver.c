#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26813;
unsigned int var_3 = 1786073144U;
short var_7 = (short)8043;
unsigned int var_8 = 2790153219U;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)73;
unsigned int var_12 = 1607496976U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 9298237462531877147ULL;
int var_21 = 2101317216;
signed char var_22 = (signed char)-102;
unsigned short var_23 = (unsigned short)55035;
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
