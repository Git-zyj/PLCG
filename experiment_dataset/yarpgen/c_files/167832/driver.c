#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1937137670;
signed char var_10 = (signed char)77;
short var_12 = (short)-14225;
long long int var_15 = 2208627363193474898LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = 5560924720210392872LL;
unsigned long long int var_21 = 9438009792035964958ULL;
unsigned long long int var_22 = 2845301091870967976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
