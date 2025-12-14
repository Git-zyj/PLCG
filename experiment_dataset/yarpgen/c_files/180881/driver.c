#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3896640716799890206ULL;
short var_4 = (short)12740;
unsigned long long int var_8 = 17297864471929293615ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2943868269U;
unsigned int var_14 = 3002789385U;
void init() {
}

void checksum() {
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
