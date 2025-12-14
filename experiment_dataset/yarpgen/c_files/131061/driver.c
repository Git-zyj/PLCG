#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2348088762U;
unsigned short var_2 = (unsigned short)55794;
unsigned long long int var_3 = 11500765582223835711ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)19266;
int var_11 = 989621223;
int var_14 = 663494534;
int zero = 0;
signed char var_16 = (signed char)-38;
signed char var_17 = (signed char)124;
int var_18 = -414243057;
void init() {
}

void checksum() {
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
