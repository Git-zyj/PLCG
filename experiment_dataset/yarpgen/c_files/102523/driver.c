#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 8222594225317905848LL;
unsigned int var_3 = 133030753U;
unsigned int var_5 = 4047827595U;
unsigned int var_7 = 2226452124U;
_Bool var_8 = (_Bool)1;
signed char var_15 = (signed char)42;
int zero = 0;
short var_16 = (short)-2500;
signed char var_17 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
