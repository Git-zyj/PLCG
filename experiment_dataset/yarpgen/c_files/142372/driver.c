#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1536868183U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)26;
short var_6 = (short)-12727;
unsigned char var_10 = (unsigned char)104;
int var_13 = -1608774182;
int zero = 0;
int var_19 = 1746635902;
unsigned int var_20 = 1418459980U;
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
