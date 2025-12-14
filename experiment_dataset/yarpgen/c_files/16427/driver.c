#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-44;
int var_4 = 1724643844;
signed char var_5 = (signed char)76;
_Bool var_9 = (_Bool)1;
unsigned char var_14 = (unsigned char)222;
long long int var_15 = -1891760232988053989LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1312092914U;
unsigned char var_21 = (unsigned char)7;
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
