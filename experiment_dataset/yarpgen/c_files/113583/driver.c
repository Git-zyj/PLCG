#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44138;
unsigned short var_2 = (unsigned short)50177;
_Bool var_3 = (_Bool)1;
int var_8 = -1739488012;
unsigned short var_18 = (unsigned short)51913;
int zero = 0;
unsigned long long int var_19 = 14793311977195447974ULL;
_Bool var_20 = (_Bool)1;
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
