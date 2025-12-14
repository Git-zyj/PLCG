#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11302301575429574150ULL;
long long int var_4 = 5100599487182155782LL;
unsigned long long int var_6 = 18153723963199821784ULL;
unsigned long long int var_7 = 14416745509415041677ULL;
long long int var_8 = -2084609619996860252LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 16010926019013028304ULL;
int zero = 0;
unsigned long long int var_14 = 3436458862247127009ULL;
short var_15 = (short)-25132;
void init() {
}

void checksum() {
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
