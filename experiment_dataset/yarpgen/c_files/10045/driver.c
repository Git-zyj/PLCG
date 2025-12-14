#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -1616798820;
long long int var_12 = -7951385355836087143LL;
signed char var_13 = (signed char)-39;
int zero = 0;
unsigned long long int var_14 = 3062381096198918429ULL;
unsigned short var_15 = (unsigned short)37880;
unsigned short var_16 = (unsigned short)12362;
void init() {
}

void checksum() {
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
