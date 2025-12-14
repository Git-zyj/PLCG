#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3826715368349014302LL;
unsigned short var_2 = (unsigned short)52216;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)13088;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)44065;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
