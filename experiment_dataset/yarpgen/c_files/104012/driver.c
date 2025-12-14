#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2814336175U;
unsigned short var_4 = (unsigned short)50695;
int var_8 = 396478624;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 2247295522U;
int zero = 0;
signed char var_14 = (signed char)76;
int var_15 = 1001430943;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
