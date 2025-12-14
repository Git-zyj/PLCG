#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
short var_2 = (short)6523;
long long int var_9 = 8728278301333261466LL;
int zero = 0;
unsigned char var_11 = (unsigned char)183;
long long int var_12 = 6052654940432599022LL;
long long int var_13 = -813594816099241206LL;
short var_14 = (short)25378;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
