#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
_Bool var_2 = (_Bool)1;
long long int var_3 = 2429521538774400837LL;
long long int var_15 = -3423954192230945475LL;
int zero = 0;
unsigned short var_17 = (unsigned short)49572;
unsigned short var_18 = (unsigned short)11554;
void init() {
}

void checksum() {
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
