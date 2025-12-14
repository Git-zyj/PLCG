#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1325610824U;
unsigned int var_4 = 1154502776U;
unsigned int var_6 = 443981380U;
unsigned int var_7 = 418364059U;
unsigned int var_9 = 3610976529U;
unsigned int var_11 = 4044804982U;
unsigned int var_13 = 319665669U;
unsigned int var_15 = 401151054U;
unsigned int var_17 = 931367381U;
unsigned int var_18 = 1935534816U;
int zero = 0;
unsigned int var_19 = 1294133899U;
unsigned int var_20 = 3865735438U;
unsigned int var_21 = 4174569105U;
void init() {
}

void checksum() {
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
