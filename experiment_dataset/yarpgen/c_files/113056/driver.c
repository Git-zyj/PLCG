#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 503346207U;
unsigned int var_10 = 629038946U;
int var_14 = -1560634132;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 14875453995672440280ULL;
short var_20 = (short)-2620;
void init() {
}

void checksum() {
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
