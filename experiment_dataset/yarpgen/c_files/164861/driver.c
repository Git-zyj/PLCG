#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_6 = (unsigned short)789;
long long int var_7 = -7097328090599908769LL;
long long int var_11 = 5939158266148884197LL;
int zero = 0;
signed char var_13 = (signed char)-49;
short var_14 = (short)11010;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
