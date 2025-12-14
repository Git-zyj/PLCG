#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -544104437;
int var_5 = -594695386;
int var_6 = -1770882321;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)155;
int zero = 0;
unsigned short var_11 = (unsigned short)27986;
int var_12 = -1816002409;
short var_13 = (short)14877;
void init() {
}

void checksum() {
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
