#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2963648293U;
unsigned int var_6 = 402270287U;
unsigned long long int var_9 = 14582910356275417934ULL;
long long int var_12 = 4178685368557193938LL;
int zero = 0;
long long int var_13 = -5907364802229217209LL;
short var_14 = (short)-17355;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
