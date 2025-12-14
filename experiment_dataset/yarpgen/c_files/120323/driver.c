#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4237156127U;
short var_6 = (short)11083;
int var_9 = 401946618;
unsigned long long int var_12 = 16852587668842267903ULL;
short var_13 = (short)3671;
unsigned long long int var_14 = 1580167230179717820ULL;
int zero = 0;
unsigned long long int var_15 = 17973019905435986871ULL;
unsigned int var_16 = 3826651050U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
