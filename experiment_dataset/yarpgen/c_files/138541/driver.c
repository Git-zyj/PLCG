#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40522;
_Bool var_3 = (_Bool)0;
int var_9 = 2020017952;
unsigned short var_15 = (unsigned short)25117;
int var_17 = -331402623;
unsigned short var_18 = (unsigned short)21174;
int zero = 0;
short var_20 = (short)-1042;
short var_21 = (short)12986;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
