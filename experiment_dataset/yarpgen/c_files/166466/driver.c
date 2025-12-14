#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31965;
int var_4 = -1462322600;
int var_6 = 1625428636;
unsigned long long int var_8 = 17166499999138474231ULL;
unsigned short var_9 = (unsigned short)9265;
long long int var_10 = -8016073717124725319LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)41088;
short var_13 = (short)-4177;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
