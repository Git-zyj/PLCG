#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1039938438U;
unsigned int var_8 = 1309055124U;
unsigned int var_9 = 2722224552U;
unsigned int var_12 = 3061823402U;
int zero = 0;
unsigned int var_13 = 3858661779U;
unsigned int var_14 = 2754887714U;
unsigned int var_15 = 653524922U;
unsigned int var_16 = 495243111U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
