#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1469725460U;
_Bool var_7 = (_Bool)1;
long long int var_9 = 1315744615772290233LL;
unsigned short var_12 = (unsigned short)62847;
int zero = 0;
unsigned long long int var_15 = 4494172216018492952ULL;
signed char var_16 = (signed char)121;
void init() {
}

void checksum() {
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
