#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -869715972;
signed char var_3 = (signed char)-110;
int var_5 = 281977258;
short var_6 = (short)-31815;
long long int var_8 = -4174234343985575603LL;
int var_9 = -952597809;
_Bool var_11 = (_Bool)0;
int var_12 = -211486729;
int zero = 0;
short var_13 = (short)9730;
int var_14 = 333794274;
unsigned char var_15 = (unsigned char)32;
unsigned int var_16 = 1994425665U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
