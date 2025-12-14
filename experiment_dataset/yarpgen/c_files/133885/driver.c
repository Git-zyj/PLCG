#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49861;
unsigned long long int var_7 = 16480617805808749449ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)51459;
short var_18 = (short)-29275;
unsigned short var_19 = (unsigned short)11806;
void init() {
}

void checksum() {
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
