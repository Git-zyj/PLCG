#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)20353;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1539273965U;
int zero = 0;
unsigned char var_10 = (unsigned char)251;
unsigned short var_11 = (unsigned short)13309;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
