#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64932;
short var_2 = (short)-17251;
signed char var_9 = (signed char)58;
short var_13 = (short)31552;
unsigned int var_16 = 3542756316U;
int zero = 0;
unsigned char var_19 = (unsigned char)94;
signed char var_20 = (signed char)23;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
