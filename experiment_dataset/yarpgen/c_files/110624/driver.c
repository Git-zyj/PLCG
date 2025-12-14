#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 127301658226263864LL;
unsigned short var_4 = (unsigned short)27481;
unsigned short var_7 = (unsigned short)40082;
short var_17 = (short)-22895;
int zero = 0;
int var_18 = 2001959491;
short var_19 = (short)28165;
void init() {
}

void checksum() {
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
