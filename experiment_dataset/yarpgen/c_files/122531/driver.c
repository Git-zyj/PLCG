#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3484856160038172580LL;
signed char var_8 = (signed char)124;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-45;
short var_15 = (short)-5931;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1488665916U;
unsigned char var_19 = (unsigned char)211;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
