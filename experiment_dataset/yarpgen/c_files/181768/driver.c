#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9890501326515322343ULL;
long long int var_7 = -2079318864162824858LL;
unsigned char var_9 = (unsigned char)176;
unsigned long long int var_10 = 12461671897807521095ULL;
int zero = 0;
unsigned int var_12 = 3508483087U;
short var_13 = (short)-20162;
unsigned long long int var_14 = 17630389221808949467ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
