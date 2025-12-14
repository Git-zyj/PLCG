#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27883;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-8823;
unsigned int var_7 = 1177710183U;
signed char var_10 = (signed char)-58;
short var_11 = (short)-28348;
int zero = 0;
unsigned int var_12 = 3764436768U;
int var_13 = 378131275;
unsigned long long int var_14 = 4127909677333788734ULL;
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
