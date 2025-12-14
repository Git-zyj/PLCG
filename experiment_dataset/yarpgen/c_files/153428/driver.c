#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1685368423;
unsigned long long int var_3 = 4099650396595231538ULL;
short var_8 = (short)12550;
int zero = 0;
long long int var_10 = -5815403554725093252LL;
unsigned long long int var_11 = 2382158754321391608ULL;
long long int var_12 = 4809799201456993130LL;
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
