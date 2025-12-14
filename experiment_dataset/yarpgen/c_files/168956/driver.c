#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1019575966;
unsigned char var_7 = (unsigned char)126;
signed char var_9 = (signed char)-102;
int var_10 = 1199859712;
unsigned long long int var_11 = 11550042787802628350ULL;
unsigned long long int var_13 = 5066858133780628721ULL;
unsigned long long int var_15 = 18285407782056591704ULL;
int zero = 0;
short var_20 = (short)24965;
unsigned short var_21 = (unsigned short)26926;
unsigned short var_22 = (unsigned short)8049;
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
