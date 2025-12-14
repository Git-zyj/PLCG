#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 721967809U;
long long int var_1 = 7890435195997027939LL;
signed char var_4 = (signed char)-10;
long long int var_5 = -2733137666299328790LL;
unsigned long long int var_6 = 613202424540856836ULL;
short var_7 = (short)-29411;
_Bool var_9 = (_Bool)0;
short var_12 = (short)5562;
int zero = 0;
int var_14 = 567291178;
signed char var_15 = (signed char)90;
int var_16 = 1977529267;
void init() {
}

void checksum() {
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
