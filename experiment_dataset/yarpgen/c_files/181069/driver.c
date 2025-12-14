#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60489;
int var_1 = 77910439;
short var_2 = (short)-12412;
unsigned int var_3 = 2835677921U;
_Bool var_7 = (_Bool)0;
long long int var_9 = -1041777871287078725LL;
int zero = 0;
unsigned long long int var_10 = 210979398019602030ULL;
_Bool var_11 = (_Bool)0;
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
