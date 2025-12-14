#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9932;
long long int var_5 = 7869207618582753526LL;
long long int var_11 = -1399462824726849470LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)1;
short var_19 = (short)-3663;
short var_20 = (short)-8808;
long long int var_21 = 3064696434952662855LL;
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
