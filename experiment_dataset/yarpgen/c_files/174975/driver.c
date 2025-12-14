#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 179503898;
signed char var_1 = (signed char)121;
unsigned int var_4 = 1564034601U;
int var_5 = 1286613279;
int var_8 = -973289134;
int var_9 = 947014754;
int zero = 0;
unsigned char var_10 = (unsigned char)204;
unsigned long long int var_11 = 3143944853465434359ULL;
short var_12 = (short)18272;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
