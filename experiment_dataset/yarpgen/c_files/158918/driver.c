#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1355736898;
int var_6 = -1920832332;
long long int var_8 = 7324235844136040689LL;
unsigned long long int var_10 = 4264671432455681016ULL;
_Bool var_17 = (_Bool)1;
short var_19 = (short)12492;
int zero = 0;
long long int var_20 = -4489650431764532000LL;
int var_21 = 523626232;
unsigned int var_22 = 864149244U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
