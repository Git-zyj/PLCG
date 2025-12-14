#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1348478511;
short var_2 = (short)-24926;
unsigned int var_6 = 3481440029U;
unsigned short var_8 = (unsigned short)37878;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)41;
int zero = 0;
unsigned int var_13 = 4140602832U;
unsigned char var_14 = (unsigned char)151;
unsigned long long int var_15 = 6016115333172911803ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
