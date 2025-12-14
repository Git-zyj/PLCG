#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4036241871U;
short var_8 = (short)15639;
_Bool var_10 = (_Bool)0;
int var_15 = 1778586309;
int zero = 0;
unsigned char var_18 = (unsigned char)183;
unsigned short var_19 = (unsigned short)17176;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
