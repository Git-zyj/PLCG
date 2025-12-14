#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)53586;
signed char var_7 = (signed char)121;
signed char var_8 = (signed char)60;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)58990;
long long int var_14 = -6308270940601517906LL;
short var_15 = (short)19098;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
