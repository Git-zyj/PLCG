#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3626411981U;
unsigned long long int var_2 = 4359474827173027898ULL;
long long int var_3 = -5238098306353843208LL;
unsigned short var_9 = (unsigned short)13462;
int zero = 0;
unsigned long long int var_17 = 17597791219432940042ULL;
short var_18 = (short)25072;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
