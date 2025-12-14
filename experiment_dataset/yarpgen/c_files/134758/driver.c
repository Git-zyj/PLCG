#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 299978428;
unsigned int var_1 = 3241321291U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1494352997U;
short var_6 = (short)26581;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)13054;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)25866;
signed char var_13 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
