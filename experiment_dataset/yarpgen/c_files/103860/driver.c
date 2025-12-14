#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7515;
unsigned short var_3 = (unsigned short)50956;
short var_4 = (short)-26847;
signed char var_7 = (signed char)60;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)7145;
long long int var_11 = -5906555540004176345LL;
short var_12 = (short)25086;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
