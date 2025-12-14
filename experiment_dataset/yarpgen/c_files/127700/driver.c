#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned int var_1 = 2519623013U;
short var_3 = (short)-25576;
long long int var_5 = -5342010146404352031LL;
unsigned char var_8 = (unsigned char)26;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)13707;
signed char var_12 = (signed char)-53;
int var_13 = -1360453106;
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
