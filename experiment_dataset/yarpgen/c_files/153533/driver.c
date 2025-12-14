#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1523638489;
int var_4 = 571421309;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)39265;
short var_11 = (short)-31891;
int zero = 0;
int var_17 = 1559197665;
int var_18 = -993744992;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
