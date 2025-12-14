#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7419608902178480991ULL;
short var_4 = (short)21246;
short var_5 = (short)15511;
int var_8 = 129416015;
int var_9 = -532931983;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1923042178U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
