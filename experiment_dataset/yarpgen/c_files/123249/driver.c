#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -404531021;
unsigned long long int var_6 = 171125782381520944ULL;
unsigned char var_7 = (unsigned char)208;
_Bool var_9 = (_Bool)1;
short var_11 = (short)16038;
int zero = 0;
unsigned long long int var_13 = 2994491403307910046ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14710688151461793595ULL;
unsigned long long int var_16 = 6086352274091392176ULL;
void init() {
}

void checksum() {
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
