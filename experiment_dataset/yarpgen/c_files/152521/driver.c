#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
long long int var_2 = -6726856489445061954LL;
unsigned char var_3 = (unsigned char)237;
int var_4 = -1617300057;
unsigned char var_8 = (unsigned char)37;
signed char var_9 = (signed char)72;
unsigned char var_10 = (unsigned char)190;
unsigned char var_11 = (unsigned char)204;
_Bool var_12 = (_Bool)0;
int var_13 = 189198688;
int var_14 = -1413508730;
long long int var_15 = -4332319144299284273LL;
int zero = 0;
unsigned char var_16 = (unsigned char)127;
unsigned char var_17 = (unsigned char)207;
int var_18 = -490317134;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
