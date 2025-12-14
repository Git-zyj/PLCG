#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8042361411289927227ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 17064130591903624967ULL;
signed char var_6 = (signed char)124;
unsigned int var_8 = 4136974038U;
int zero = 0;
short var_11 = (short)-24485;
unsigned short var_12 = (unsigned short)20255;
long long int var_13 = 8658811214103032800LL;
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
