#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6085;
_Bool var_5 = (_Bool)1;
long long int var_6 = -4173304195282552240LL;
short var_8 = (short)-19561;
unsigned int var_9 = 3494386432U;
signed char var_13 = (signed char)-34;
unsigned char var_14 = (unsigned char)249;
int zero = 0;
long long int var_15 = -8329497992973239087LL;
short var_16 = (short)-11776;
void init() {
}

void checksum() {
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
