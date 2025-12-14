#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned long long int var_1 = 8614486031562334977ULL;
unsigned short var_5 = (unsigned short)434;
signed char var_7 = (signed char)-104;
short var_9 = (short)-31433;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)62;
short var_12 = (short)-10018;
unsigned long long int var_13 = 6212381623075515429ULL;
unsigned int var_14 = 1274005529U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
