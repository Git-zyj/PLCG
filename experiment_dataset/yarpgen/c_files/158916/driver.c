#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12821167735723335009ULL;
long long int var_3 = 6146613119923532473LL;
signed char var_5 = (signed char)-120;
short var_8 = (short)26622;
unsigned int var_12 = 3123763063U;
int zero = 0;
unsigned long long int var_18 = 17528960268649149080ULL;
long long int var_19 = -4341794874884143461LL;
unsigned long long int var_20 = 13626799717111606168ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
