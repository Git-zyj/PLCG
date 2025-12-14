#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9746343878954092267ULL;
unsigned long long int var_14 = 4395919790102741238ULL;
int zero = 0;
short var_19 = (short)15673;
unsigned int var_20 = 3040884446U;
short var_21 = (short)-10809;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
