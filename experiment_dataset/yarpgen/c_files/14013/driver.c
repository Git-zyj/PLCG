#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1337342859;
signed char var_1 = (signed char)56;
int var_2 = -376704988;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)13156;
unsigned long long int var_8 = 1582617308130289939ULL;
int var_9 = 1010185696;
int zero = 0;
unsigned int var_13 = 725453962U;
short var_14 = (short)-11591;
int var_15 = -1012115026;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
