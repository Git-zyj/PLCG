#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4514606247364582581ULL;
short var_4 = (short)15063;
short var_7 = (short)-16164;
short var_9 = (short)-13364;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 2845090856U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
