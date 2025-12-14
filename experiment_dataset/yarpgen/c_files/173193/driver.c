#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9396727096292012259ULL;
_Bool var_10 = (_Bool)1;
short var_14 = (short)25499;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)8980;
signed char var_21 = (signed char)98;
void init() {
}

void checksum() {
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
