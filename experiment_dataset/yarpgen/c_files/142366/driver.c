#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5822077977141365196LL;
unsigned char var_4 = (unsigned char)44;
short var_6 = (short)7992;
unsigned short var_7 = (unsigned short)53478;
int zero = 0;
int var_11 = 171858790;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)46276;
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
