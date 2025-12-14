#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17998577226454283815ULL;
unsigned long long int var_8 = 13086865130445410038ULL;
unsigned long long int var_10 = 15223160889979129458ULL;
int zero = 0;
long long int var_11 = -9062696039289449236LL;
unsigned char var_12 = (unsigned char)176;
int var_13 = -1900566082;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
