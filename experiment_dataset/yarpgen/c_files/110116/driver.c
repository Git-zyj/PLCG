#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4042;
long long int var_4 = -5622792921041850894LL;
short var_5 = (short)3914;
unsigned short var_6 = (unsigned short)16879;
_Bool var_8 = (_Bool)0;
long long int var_9 = -3333967694217826424LL;
int zero = 0;
short var_10 = (short)-29306;
short var_11 = (short)-17582;
short var_12 = (short)249;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
