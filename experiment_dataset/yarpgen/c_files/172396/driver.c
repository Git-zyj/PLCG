#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-49;
_Bool var_4 = (_Bool)1;
int var_8 = -1444755352;
long long int var_11 = 9190078751665880313LL;
int zero = 0;
unsigned short var_16 = (unsigned short)26193;
unsigned char var_17 = (unsigned char)218;
int var_18 = 525978854;
short var_19 = (short)-19007;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
