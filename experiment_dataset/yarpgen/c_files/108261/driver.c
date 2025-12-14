#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_8 = -5852157750387785824LL;
unsigned long long int var_11 = 14797462531982925804ULL;
unsigned short var_14 = (unsigned short)3625;
int zero = 0;
unsigned long long int var_17 = 11382588811779134541ULL;
unsigned int var_18 = 2197032842U;
unsigned short var_19 = (unsigned short)17358;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
