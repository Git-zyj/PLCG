#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_7 = 3380165374U;
signed char var_9 = (signed char)17;
int zero = 0;
unsigned long long int var_12 = 16000120701964319602ULL;
unsigned long long int var_13 = 6829156615853257568ULL;
short var_14 = (short)28697;
signed char var_15 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
