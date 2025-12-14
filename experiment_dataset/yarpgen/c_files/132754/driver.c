#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)95;
short var_7 = (short)-15637;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-118;
int zero = 0;
unsigned long long int var_17 = 364933340799409420ULL;
short var_18 = (short)4291;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
