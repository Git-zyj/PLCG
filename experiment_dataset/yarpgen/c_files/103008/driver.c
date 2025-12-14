#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
signed char var_5 = (signed char)-48;
unsigned long long int var_7 = 13951369686915887011ULL;
unsigned long long int var_11 = 11091966618131493581ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15552245587268504953ULL;
unsigned int var_14 = 1800531698U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
