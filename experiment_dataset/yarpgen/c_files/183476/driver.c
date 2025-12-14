#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8514664436796007352LL;
int var_5 = 260038040;
unsigned long long int var_7 = 282661100354343889ULL;
short var_8 = (short)-32123;
int zero = 0;
short var_18 = (short)-16726;
short var_19 = (short)4529;
long long int var_20 = -6698707113735670043LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
