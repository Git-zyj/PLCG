#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27279;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)11681;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)39536;
unsigned short var_18 = (unsigned short)59774;
unsigned short var_19 = (unsigned short)58578;
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
