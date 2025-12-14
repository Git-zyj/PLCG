#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4859267227409188732LL;
int var_4 = 1765816318;
unsigned int var_5 = 3867458340U;
signed char var_7 = (signed char)-125;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-1788;
unsigned long long int var_13 = 13768877859533380750ULL;
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
