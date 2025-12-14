#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2052745333;
unsigned char var_7 = (unsigned char)57;
short var_9 = (short)-32377;
unsigned char var_15 = (unsigned char)57;
short var_17 = (short)-18066;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)25217;
long long int var_20 = -5492669290993368306LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
