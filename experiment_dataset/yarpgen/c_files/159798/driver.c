#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2072022234;
signed char var_5 = (signed char)-27;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-1;
int zero = 0;
int var_10 = -1968474300;
short var_11 = (short)6352;
unsigned short var_12 = (unsigned short)10610;
unsigned int var_13 = 1080951757U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
