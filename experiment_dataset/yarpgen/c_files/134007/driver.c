#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1964213513;
_Bool var_6 = (_Bool)1;
unsigned int var_9 = 4177749983U;
short var_11 = (short)-26924;
unsigned char var_13 = (unsigned char)66;
int zero = 0;
int var_14 = -180133934;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
