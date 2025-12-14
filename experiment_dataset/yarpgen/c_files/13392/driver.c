#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -952843856;
_Bool var_1 = (_Bool)1;
int var_3 = 999726343;
signed char var_6 = (signed char)-77;
unsigned long long int var_8 = 7582166514298010793ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)60255;
long long int var_11 = 30904465778128974LL;
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
