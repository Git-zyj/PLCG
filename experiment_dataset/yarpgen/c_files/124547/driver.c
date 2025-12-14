#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18035368710269619226ULL;
unsigned long long int var_1 = 8110891045601729152ULL;
unsigned short var_9 = (unsigned short)31663;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 12164381456755147849ULL;
unsigned short var_14 = (unsigned short)14975;
unsigned long long int var_15 = 11703491223836731428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
