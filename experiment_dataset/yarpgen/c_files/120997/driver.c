#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6299506263445803541LL;
unsigned char var_3 = (unsigned char)39;
unsigned long long int var_6 = 5588302303690421590ULL;
unsigned int var_7 = 3082459004U;
long long int var_9 = -2227093704582702520LL;
long long int var_11 = -2848552445421023859LL;
int zero = 0;
unsigned char var_13 = (unsigned char)225;
unsigned char var_14 = (unsigned char)220;
signed char var_15 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
