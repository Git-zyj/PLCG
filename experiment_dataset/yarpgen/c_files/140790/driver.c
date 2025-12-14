#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1214027914;
long long int var_4 = 4186375082289048196LL;
unsigned int var_7 = 2145842114U;
short var_9 = (short)-31133;
unsigned int var_10 = 466264601U;
int zero = 0;
unsigned long long int var_20 = 9353012218321688122ULL;
unsigned short var_21 = (unsigned short)14162;
void init() {
}

void checksum() {
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
