#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5346413124102158465LL;
unsigned long long int var_2 = 10730048048982673771ULL;
unsigned char var_5 = (unsigned char)68;
short var_6 = (short)10417;
short var_8 = (short)658;
int zero = 0;
unsigned long long int var_13 = 11743768583863286022ULL;
long long int var_14 = -3760445331129727058LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
