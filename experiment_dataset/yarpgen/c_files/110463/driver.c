#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1177623413015123523LL;
unsigned char var_4 = (unsigned char)125;
long long int var_13 = -8256863407993712296LL;
long long int var_14 = 1044296121292990265LL;
long long int var_15 = -7768533450123599855LL;
short var_16 = (short)2148;
int zero = 0;
int var_18 = -458566887;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 6234907764876107637ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
