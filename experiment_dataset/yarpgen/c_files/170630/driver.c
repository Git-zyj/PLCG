#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1629322572190311443ULL;
unsigned int var_7 = 1935693817U;
unsigned long long int var_13 = 2620624925089917506ULL;
int zero = 0;
unsigned int var_19 = 2685811922U;
short var_20 = (short)30601;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
