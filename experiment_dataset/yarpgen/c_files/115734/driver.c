#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15640;
short var_9 = (short)17651;
int var_10 = 840309189;
short var_11 = (short)-18682;
unsigned long long int var_12 = 11902179273044088965ULL;
long long int var_16 = 7705039736398465939LL;
int zero = 0;
int var_19 = 357371479;
unsigned short var_20 = (unsigned short)7622;
unsigned long long int var_21 = 10324310618046763286ULL;
void init() {
}

void checksum() {
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
