#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2947683644U;
signed char var_1 = (signed char)-59;
signed char var_4 = (signed char)-24;
signed char var_6 = (signed char)-27;
unsigned int var_7 = 819497721U;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)22482;
unsigned short var_18 = (unsigned short)38699;
int zero = 0;
unsigned char var_20 = (unsigned char)57;
unsigned short var_21 = (unsigned short)36254;
signed char var_22 = (signed char)-120;
void init() {
}

void checksum() {
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
