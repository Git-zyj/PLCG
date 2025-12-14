#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_9 = (signed char)-46;
short var_10 = (short)-118;
short var_15 = (short)-9772;
int zero = 0;
unsigned short var_17 = (unsigned short)35967;
int var_18 = -270832089;
unsigned short var_19 = (unsigned short)31549;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
