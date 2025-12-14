#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21319;
signed char var_1 = (signed char)-30;
unsigned int var_3 = 1914427583U;
signed char var_5 = (signed char)48;
unsigned short var_7 = (unsigned short)14574;
signed char var_8 = (signed char)-16;
unsigned short var_9 = (unsigned short)37865;
long long int var_10 = -8576951668855481970LL;
int zero = 0;
unsigned short var_12 = (unsigned short)57841;
long long int var_13 = 5259374659291898478LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-50;
long long int var_16 = 8964550302971247701LL;
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
