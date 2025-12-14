#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6905863307233548728LL;
signed char var_4 = (signed char)90;
long long int var_7 = 8178811005662923450LL;
unsigned long long int var_8 = 11739006476762313580ULL;
signed char var_9 = (signed char)96;
int zero = 0;
short var_12 = (short)23162;
int var_13 = 1032639430;
signed char var_14 = (signed char)-16;
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
