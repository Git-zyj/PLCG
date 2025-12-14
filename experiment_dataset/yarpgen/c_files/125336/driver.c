#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 282725638;
unsigned short var_5 = (unsigned short)33222;
int var_7 = -1134519891;
unsigned long long int var_15 = 11782935030197546576ULL;
unsigned short var_16 = (unsigned short)18694;
long long int var_17 = 3163118336064684776LL;
int zero = 0;
unsigned short var_18 = (unsigned short)25179;
_Bool var_19 = (_Bool)0;
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
