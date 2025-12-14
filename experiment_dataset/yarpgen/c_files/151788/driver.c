#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11606375093073345934ULL;
unsigned short var_9 = (unsigned short)63382;
unsigned short var_11 = (unsigned short)42089;
unsigned short var_13 = (unsigned short)65345;
int zero = 0;
unsigned int var_18 = 2773641652U;
unsigned short var_19 = (unsigned short)63526;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
