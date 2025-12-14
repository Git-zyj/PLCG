#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-97;
short var_4 = (short)22672;
_Bool var_6 = (_Bool)0;
int var_9 = -1472592038;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)104;
unsigned char var_17 = (unsigned char)134;
unsigned int var_18 = 3839458452U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
