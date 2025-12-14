#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 896703011;
short var_2 = (short)-3586;
long long int var_7 = -1118151345416369705LL;
unsigned int var_9 = 640559206U;
int zero = 0;
unsigned int var_10 = 3110778939U;
long long int var_11 = -9121526663162139436LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
