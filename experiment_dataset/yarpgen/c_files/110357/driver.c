#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
unsigned short var_9 = (unsigned short)14214;
short var_17 = (short)26043;
int var_18 = -1606101124;
int zero = 0;
unsigned short var_19 = (unsigned short)28937;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)3279;
unsigned int var_22 = 438324396U;
void init() {
}

void checksum() {
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
