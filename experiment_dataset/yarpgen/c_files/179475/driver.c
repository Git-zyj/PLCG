#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18167;
unsigned short var_4 = (unsigned short)49697;
_Bool var_5 = (_Bool)0;
int var_9 = 563148201;
long long int var_10 = 858653167419520577LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 805537499U;
int zero = 0;
signed char var_14 = (signed char)40;
unsigned short var_15 = (unsigned short)58302;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
