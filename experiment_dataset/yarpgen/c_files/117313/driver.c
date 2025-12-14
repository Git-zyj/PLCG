#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4516040652538286984LL;
short var_13 = (short)-16654;
unsigned short var_17 = (unsigned short)50675;
int zero = 0;
long long int var_20 = -7773007149710471104LL;
unsigned short var_21 = (unsigned short)32990;
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
