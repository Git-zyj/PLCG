#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19896;
short var_3 = (short)-22791;
unsigned short var_5 = (unsigned short)31534;
long long int var_9 = 8052940193414243488LL;
int zero = 0;
short var_10 = (short)10859;
short var_11 = (short)17156;
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
