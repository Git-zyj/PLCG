#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 992845107;
unsigned char var_3 = (unsigned char)33;
int var_5 = 598304471;
int var_6 = 1318540247;
long long int var_7 = 7660099490198964665LL;
signed char var_8 = (signed char)116;
int zero = 0;
int var_12 = -372878232;
unsigned char var_13 = (unsigned char)246;
int var_14 = 1326685923;
signed char var_15 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
