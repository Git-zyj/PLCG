#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
long long int var_2 = 4517143031992417296LL;
short var_8 = (short)2110;
signed char var_9 = (signed char)29;
long long int var_10 = -1864073089249093499LL;
long long int var_11 = -1738095992744103947LL;
int zero = 0;
unsigned long long int var_12 = 587378637564335638ULL;
_Bool var_13 = (_Bool)1;
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
