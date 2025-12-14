#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7172780355583794957ULL;
unsigned char var_1 = (unsigned char)154;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-76;
unsigned int var_5 = 1808993479U;
unsigned short var_7 = (unsigned short)52127;
unsigned short var_8 = (unsigned short)27138;
unsigned int var_9 = 3256163775U;
unsigned int var_10 = 1000996401U;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-10;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)18133;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
