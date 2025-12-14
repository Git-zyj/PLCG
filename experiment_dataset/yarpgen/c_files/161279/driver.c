#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2600930980U;
unsigned int var_4 = 2039510667U;
short var_9 = (short)17706;
_Bool var_10 = (_Bool)0;
int var_11 = 474385861;
int zero = 0;
unsigned long long int var_12 = 5592989382219859448ULL;
unsigned long long int var_13 = 2074916882642660722ULL;
unsigned long long int var_14 = 11250473912444636399ULL;
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
