#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2049745768U;
int var_6 = 40482207;
unsigned short var_16 = (unsigned short)34363;
int zero = 0;
unsigned short var_18 = (unsigned short)36653;
unsigned long long int var_19 = 6048395616090425298ULL;
unsigned long long int var_20 = 14848473279283077758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
