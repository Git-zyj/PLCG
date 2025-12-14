#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 370981385;
long long int var_1 = 5207269147388099544LL;
int var_2 = 1291113797;
unsigned short var_6 = (unsigned short)35536;
int var_8 = -712337339;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = 4505549649691076918LL;
unsigned int var_18 = 3713680732U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
