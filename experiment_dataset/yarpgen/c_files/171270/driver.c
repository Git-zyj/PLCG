#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned short var_7 = (unsigned short)6630;
unsigned long long int var_9 = 15400949522838891967ULL;
short var_12 = (short)-20906;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-109;
int zero = 0;
short var_20 = (short)-9642;
int var_21 = 1640768086;
unsigned short var_22 = (unsigned short)13510;
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
