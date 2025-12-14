#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
signed char var_1 = (signed char)-116;
unsigned long long int var_8 = 8142471633971091872ULL;
int zero = 0;
signed char var_12 = (signed char)-20;
_Bool var_13 = (_Bool)0;
short var_14 = (short)27175;
signed char var_15 = (signed char)-56;
short var_16 = (short)-22803;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
