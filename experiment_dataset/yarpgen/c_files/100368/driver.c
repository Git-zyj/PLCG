#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)78;
short var_5 = (short)15105;
int var_8 = 857253022;
signed char var_10 = (signed char)55;
long long int var_11 = 1077112801599074291LL;
int zero = 0;
unsigned char var_15 = (unsigned char)235;
long long int var_16 = 2817130219902597378LL;
signed char var_17 = (signed char)-121;
long long int var_18 = 2356971932743656774LL;
unsigned short var_19 = (unsigned short)17473;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
