#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)25;
signed char var_4 = (signed char)7;
long long int var_5 = 1748453932014825011LL;
long long int var_6 = 3925690051375527124LL;
signed char var_9 = (signed char)-2;
long long int var_10 = -5296115916437164679LL;
unsigned int var_14 = 1811368530U;
int zero = 0;
long long int var_19 = -5615322862438689805LL;
signed char var_20 = (signed char)8;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
