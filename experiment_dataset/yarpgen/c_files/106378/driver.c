#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
signed char var_1 = (signed char)38;
signed char var_4 = (signed char)-3;
long long int var_6 = -6364181120107449711LL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 266251404U;
int zero = 0;
signed char var_11 = (signed char)-126;
unsigned short var_12 = (unsigned short)56715;
int var_13 = -1328324915;
long long int var_14 = -101990527997226233LL;
void init() {
}

void checksum() {
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
