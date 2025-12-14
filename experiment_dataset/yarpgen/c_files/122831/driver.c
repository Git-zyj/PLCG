#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
signed char var_1 = (signed char)-39;
_Bool var_3 = (_Bool)0;
signed char var_7 = (signed char)50;
signed char var_11 = (signed char)-68;
int zero = 0;
long long int var_14 = 7048070368087046170LL;
short var_15 = (short)5543;
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
