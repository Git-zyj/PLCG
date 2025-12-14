#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)19;
unsigned int var_7 = 3257184857U;
signed char var_8 = (signed char)-45;
short var_10 = (short)1941;
long long int var_12 = 8565332950698948919LL;
unsigned long long int var_15 = 16113434282799842816ULL;
int zero = 0;
short var_18 = (short)-9356;
signed char var_19 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
