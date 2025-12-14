#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18076193538988066231ULL;
long long int var_2 = -6241244752218414808LL;
int var_4 = 1207284313;
unsigned long long int var_7 = 1518336991695318394ULL;
unsigned short var_12 = (unsigned short)10812;
int zero = 0;
unsigned int var_19 = 2870521227U;
unsigned short var_20 = (unsigned short)23870;
unsigned long long int var_21 = 9777859141760005001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
