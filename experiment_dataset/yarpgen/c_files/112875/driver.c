#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3235576325629695571LL;
long long int var_2 = 3442889987069150265LL;
signed char var_5 = (signed char)37;
unsigned int var_6 = 2892608790U;
int var_7 = 1855079454;
signed char var_8 = (signed char)-53;
signed char var_10 = (signed char)21;
int zero = 0;
long long int var_12 = 1456992512081187288LL;
unsigned short var_13 = (unsigned short)47007;
signed char var_14 = (signed char)118;
unsigned long long int var_15 = 4644546327050889807ULL;
short var_16 = (short)-21800;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
