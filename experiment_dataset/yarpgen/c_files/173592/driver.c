#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7070;
short var_7 = (short)17790;
long long int var_9 = -5407447233218289795LL;
long long int var_18 = -3420910340214792696LL;
int zero = 0;
unsigned int var_19 = 744222615U;
unsigned int var_20 = 3529080146U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
