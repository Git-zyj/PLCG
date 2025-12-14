#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10113892478205056237ULL;
signed char var_1 = (signed char)-106;
short var_2 = (short)6341;
unsigned long long int var_3 = 7315242248806880804ULL;
long long int var_4 = 4230442937589525853LL;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)23;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5190057758588546569ULL;
short var_20 = (short)31912;
short var_21 = (short)18045;
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
