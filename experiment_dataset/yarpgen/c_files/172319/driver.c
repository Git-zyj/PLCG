#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27789;
long long int var_3 = 2691524693034212465LL;
long long int var_6 = -2486948037682958290LL;
long long int var_7 = 8609324426570088426LL;
int zero = 0;
long long int var_10 = 3248561301134680908LL;
unsigned short var_11 = (unsigned short)34423;
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
