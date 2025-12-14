#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)37834;
unsigned int var_8 = 3001611155U;
signed char var_9 = (signed char)3;
unsigned short var_13 = (unsigned short)15240;
long long int var_14 = -8722881990650693625LL;
int zero = 0;
unsigned short var_15 = (unsigned short)52277;
short var_16 = (short)-11432;
short var_17 = (short)-13909;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
