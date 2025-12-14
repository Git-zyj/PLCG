#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)28713;
short var_5 = (short)-1806;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)15080;
int zero = 0;
short var_10 = (short)18269;
signed char var_11 = (signed char)68;
unsigned int var_12 = 1620079961U;
unsigned char var_13 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
