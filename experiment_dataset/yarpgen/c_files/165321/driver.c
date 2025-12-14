#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8258;
unsigned long long int var_4 = 3616758271320854012ULL;
int var_5 = -2040824305;
unsigned long long int var_9 = 11287562628866796399ULL;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2319416023U;
int zero = 0;
long long int var_14 = -8491419320830326561LL;
unsigned long long int var_15 = 659541002549242301ULL;
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
