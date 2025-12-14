#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61026;
long long int var_3 = -2831754154812145130LL;
unsigned long long int var_11 = 16762053477448022644ULL;
unsigned long long int var_13 = 15113485244731833213ULL;
int var_16 = -672422215;
int zero = 0;
unsigned int var_18 = 3729913394U;
unsigned char var_19 = (unsigned char)158;
long long int var_20 = 5162142944199933308LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
