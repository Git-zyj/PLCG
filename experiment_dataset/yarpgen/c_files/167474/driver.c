#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16368;
unsigned short var_9 = (unsigned short)45843;
unsigned short var_13 = (unsigned short)518;
int zero = 0;
unsigned long long int var_14 = 8643202211495157931ULL;
short var_15 = (short)-8457;
short var_16 = (short)10032;
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
