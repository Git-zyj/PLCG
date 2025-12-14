#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17242486833388885220ULL;
unsigned long long int var_3 = 15581165366148004542ULL;
signed char var_6 = (signed char)-78;
long long int var_11 = 5758346683546259486LL;
short var_15 = (short)31260;
int zero = 0;
signed char var_16 = (signed char)-35;
unsigned char var_17 = (unsigned char)154;
unsigned char var_18 = (unsigned char)10;
signed char var_19 = (signed char)-65;
signed char var_20 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
