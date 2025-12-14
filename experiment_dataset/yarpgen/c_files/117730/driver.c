#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -595863785;
short var_9 = (short)-13592;
unsigned int var_15 = 3514215970U;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-11820;
int zero = 0;
int var_19 = -1342573544;
_Bool var_20 = (_Bool)1;
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
