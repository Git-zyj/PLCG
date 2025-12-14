#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13937230962475124484ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)127;
_Bool var_11 = (_Bool)1;
unsigned short var_16 = (unsigned short)62297;
int zero = 0;
unsigned int var_20 = 3657755269U;
short var_21 = (short)30492;
void init() {
}

void checksum() {
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
