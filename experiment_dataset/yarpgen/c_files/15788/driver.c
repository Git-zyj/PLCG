#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)22697;
unsigned long long int var_3 = 15489677615837236171ULL;
unsigned short var_4 = (unsigned short)40529;
unsigned long long int var_5 = 9928860381141307851ULL;
long long int var_6 = 6110975540513470547LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-43;
unsigned short var_16 = (unsigned short)1970;
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
