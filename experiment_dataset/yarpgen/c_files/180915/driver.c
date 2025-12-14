#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)38;
long long int var_3 = 8508878415194900068LL;
_Bool var_6 = (_Bool)1;
int var_7 = -856999118;
signed char var_8 = (signed char)35;
unsigned int var_10 = 2789932463U;
unsigned int var_12 = 3183357210U;
signed char var_13 = (signed char)50;
signed char var_15 = (signed char)93;
unsigned int var_17 = 699730411U;
int zero = 0;
int var_19 = 103970062;
int var_20 = -614022751;
short var_21 = (short)13439;
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
