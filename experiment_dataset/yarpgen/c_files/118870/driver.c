#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)65;
unsigned char var_3 = (unsigned char)245;
short var_4 = (short)-75;
long long int var_6 = -3119019111177632368LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)4698;
unsigned char var_9 = (unsigned char)244;
int zero = 0;
unsigned long long int var_12 = 8657045569120148338ULL;
short var_13 = (short)30220;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
