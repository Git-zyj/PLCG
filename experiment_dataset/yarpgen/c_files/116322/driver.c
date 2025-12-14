#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5570550157154623203ULL;
long long int var_4 = 5636557306713447129LL;
int var_6 = -1890540659;
short var_12 = (short)-4888;
unsigned char var_14 = (unsigned char)83;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
unsigned int var_19 = 2784716780U;
signed char var_20 = (signed char)52;
long long int var_21 = -222396880046931694LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
