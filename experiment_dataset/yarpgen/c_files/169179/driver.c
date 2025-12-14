#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10103;
unsigned long long int var_5 = 11500908993927998137ULL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-25467;
int zero = 0;
long long int var_15 = 7520504466328997630LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)127;
short var_18 = (short)29848;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
