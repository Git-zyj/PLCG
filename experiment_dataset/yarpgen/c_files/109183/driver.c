#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4449679928218954167LL;
unsigned int var_6 = 1598766943U;
unsigned char var_8 = (unsigned char)94;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 6629317062941038856ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2825184017U;
long long int var_21 = -8447741616017107740LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
