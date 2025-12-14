#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8692585996465139989LL;
int var_1 = 606866728;
unsigned long long int var_3 = 1465908940037771044ULL;
signed char var_4 = (signed char)25;
int var_6 = 1592019906;
int var_9 = -652737460;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 4631119731371601163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
