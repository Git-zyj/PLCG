#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)-14;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)51;
long long int var_9 = 7114861616227780275LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-4997;
signed char var_12 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
