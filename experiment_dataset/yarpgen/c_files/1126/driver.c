#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62532;
_Bool var_9 = (_Bool)0;
long long int var_13 = 4674713828896642781LL;
unsigned short var_15 = (unsigned short)4822;
unsigned short var_16 = (unsigned short)11444;
int zero = 0;
unsigned int var_18 = 844835543U;
unsigned short var_19 = (unsigned short)26363;
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
