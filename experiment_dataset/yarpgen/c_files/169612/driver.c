#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4678819810140756832LL;
signed char var_6 = (signed char)-52;
unsigned int var_7 = 259952965U;
unsigned long long int var_13 = 13636630375059903600ULL;
short var_17 = (short)-2741;
int zero = 0;
int var_18 = -869082274;
long long int var_19 = 3949990726372619007LL;
void init() {
}

void checksum() {
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
