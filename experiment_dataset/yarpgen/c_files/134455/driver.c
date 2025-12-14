#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2058756568U;
unsigned short var_4 = (unsigned short)31243;
signed char var_6 = (signed char)40;
unsigned char var_9 = (unsigned char)65;
unsigned int var_10 = 3686271861U;
signed char var_12 = (signed char)87;
int zero = 0;
int var_13 = -1475258458;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-52;
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
