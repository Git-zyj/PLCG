#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-37;
_Bool var_7 = (_Bool)1;
int var_8 = 1246644835;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)118;
unsigned short var_13 = (unsigned short)18523;
int var_14 = 1756525715;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
