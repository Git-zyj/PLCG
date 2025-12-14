#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5286;
unsigned long long int var_6 = 16651601272233415653ULL;
int var_10 = -2051927341;
int zero = 0;
short var_14 = (short)-15588;
short var_15 = (short)-30001;
long long int var_16 = -7907582296199104317LL;
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
