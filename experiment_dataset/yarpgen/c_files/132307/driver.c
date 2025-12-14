#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
int var_2 = -1049661760;
unsigned long long int var_3 = 9651433058819993254ULL;
long long int var_4 = 5733003265721203171LL;
long long int var_5 = -1646589544232999312LL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)14876;
signed char var_12 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
