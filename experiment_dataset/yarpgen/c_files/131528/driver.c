#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20370;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)11138;
short var_11 = (short)-5534;
int zero = 0;
unsigned char var_13 = (unsigned char)214;
unsigned char var_14 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
