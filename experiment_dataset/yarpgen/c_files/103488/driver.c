#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2538706053U;
unsigned long long int var_3 = 4622884020719763521ULL;
unsigned short var_6 = (unsigned short)23904;
unsigned char var_7 = (unsigned char)132;
unsigned short var_11 = (unsigned short)4296;
_Bool var_12 = (_Bool)0;
long long int var_16 = -6047662556605813596LL;
int zero = 0;
int var_17 = 2100651844;
unsigned long long int var_18 = 10014259474511926383ULL;
long long int var_19 = -8502655224185568775LL;
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
