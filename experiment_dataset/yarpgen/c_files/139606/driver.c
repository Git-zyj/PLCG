#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3149812908010588974LL;
unsigned int var_1 = 1984574464U;
unsigned short var_5 = (unsigned short)10346;
unsigned int var_6 = 2117139919U;
unsigned int var_11 = 2463730221U;
unsigned short var_16 = (unsigned short)36264;
int zero = 0;
unsigned int var_17 = 1435934910U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4118209018U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
