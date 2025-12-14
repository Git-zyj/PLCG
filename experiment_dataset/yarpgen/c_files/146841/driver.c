#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)3851;
int var_7 = -1105670164;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)48330;
int zero = 0;
unsigned long long int var_10 = 16372850672738462821ULL;
short var_11 = (short)29562;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
