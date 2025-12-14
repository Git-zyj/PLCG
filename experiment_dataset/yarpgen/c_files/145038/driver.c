#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12143;
long long int var_9 = 2986759747017026037LL;
_Bool var_10 = (_Bool)1;
int var_11 = 49793377;
int zero = 0;
int var_12 = 717597517;
short var_13 = (short)-23106;
void init() {
}

void checksum() {
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
