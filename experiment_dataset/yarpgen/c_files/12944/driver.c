#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1147478591;
unsigned long long int var_3 = 16559402689709557272ULL;
unsigned int var_5 = 29144637U;
int var_10 = -196283694;
unsigned int var_13 = 1090512592U;
int zero = 0;
long long int var_20 = -1268402958845819429LL;
int var_21 = 1102749300;
int var_22 = 8052798;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
