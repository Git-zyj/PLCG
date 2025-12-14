#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
signed char var_5 = (signed char)-65;
signed char var_6 = (signed char)-118;
unsigned char var_7 = (unsigned char)167;
unsigned long long int var_8 = 17918914361815253483ULL;
unsigned long long int var_9 = 4317466342690035205ULL;
int zero = 0;
int var_14 = -1016028927;
unsigned long long int var_15 = 14685487630925065178ULL;
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
