#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)25;
signed char var_5 = (signed char)50;
int var_8 = -1084801457;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1870302548;
int var_14 = 1179075682;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
