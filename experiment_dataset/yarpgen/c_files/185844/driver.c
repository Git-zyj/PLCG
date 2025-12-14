#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16061937851492708375ULL;
long long int var_6 = 9072310580861825520LL;
_Bool var_8 = (_Bool)0;
short var_12 = (short)7067;
unsigned long long int var_13 = 6234644338893913059ULL;
int zero = 0;
long long int var_17 = -6339169840962912183LL;
unsigned char var_18 = (unsigned char)189;
void init() {
}

void checksum() {
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
