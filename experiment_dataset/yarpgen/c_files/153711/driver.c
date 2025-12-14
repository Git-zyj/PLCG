#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
unsigned short var_3 = (unsigned short)57641;
signed char var_4 = (signed char)96;
unsigned int var_5 = 601933376U;
unsigned short var_8 = (unsigned short)43648;
short var_9 = (short)-3851;
int zero = 0;
long long int var_11 = 5498713727255433822LL;
int var_12 = -1788898631;
unsigned long long int var_13 = 4485212230230489227ULL;
unsigned long long int var_14 = 16895338843313022533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
