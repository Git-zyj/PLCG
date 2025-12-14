#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1318300032;
short var_6 = (short)-10070;
short var_9 = (short)-957;
int zero = 0;
signed char var_16 = (signed char)-25;
signed char var_17 = (signed char)39;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)23;
unsigned short var_20 = (unsigned short)3776;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
