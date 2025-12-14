#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
int var_3 = 665917389;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-21712;
unsigned int var_8 = 1055007398U;
long long int var_9 = -2765424486581262211LL;
long long int var_11 = -4986083207047700929LL;
int zero = 0;
unsigned int var_13 = 4226152165U;
unsigned int var_14 = 2312090138U;
void init() {
}

void checksum() {
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
