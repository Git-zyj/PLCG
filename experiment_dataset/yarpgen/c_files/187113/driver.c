#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3187458638U;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)84;
int var_8 = -1739455228;
int var_10 = 1786145916;
int zero = 0;
unsigned long long int var_11 = 3219356479000164685ULL;
unsigned long long int var_12 = 5302287025247216446ULL;
short var_13 = (short)31248;
int var_14 = 2032547320;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
