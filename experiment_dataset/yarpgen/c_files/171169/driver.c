#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3544224417U;
long long int var_6 = 5396486341969448320LL;
unsigned short var_9 = (unsigned short)18460;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 14486556800859116032ULL;
unsigned int var_14 = 844961236U;
int var_15 = 17712087;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
