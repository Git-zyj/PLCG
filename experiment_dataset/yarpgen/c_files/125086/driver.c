#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -4236860280804662032LL;
long long int var_3 = 4273975522339573300LL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)89;
signed char var_9 = (signed char)-24;
int zero = 0;
signed char var_11 = (signed char)-74;
unsigned short var_12 = (unsigned short)20959;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
