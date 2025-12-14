#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_5 = 4242143364U;
_Bool var_9 = (_Bool)0;
short var_10 = (short)23849;
int zero = 0;
long long int var_12 = 4045836179400138796LL;
unsigned long long int var_13 = 11679975877062218761ULL;
int var_14 = 1442751293;
int var_15 = 1917396316;
unsigned char var_16 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
