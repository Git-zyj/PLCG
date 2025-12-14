#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1650379278;
unsigned long long int var_8 = 7868935903893723628ULL;
unsigned int var_9 = 1543667807U;
unsigned long long int var_14 = 1427668338318347052ULL;
int zero = 0;
unsigned long long int var_16 = 9012091028678989172ULL;
long long int var_17 = -4478844936831203297LL;
unsigned int var_18 = 2430255690U;
short var_19 = (short)-28061;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
