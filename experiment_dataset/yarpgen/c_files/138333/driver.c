#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 12116482760212824320ULL;
short var_10 = (short)2632;
unsigned long long int var_12 = 10201349279203669619ULL;
long long int var_13 = -643864367431633216LL;
int zero = 0;
unsigned short var_15 = (unsigned short)555;
unsigned long long int var_16 = 15857316197414213294ULL;
unsigned short var_17 = (unsigned short)29863;
unsigned short var_18 = (unsigned short)16002;
int var_19 = -1524902169;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
