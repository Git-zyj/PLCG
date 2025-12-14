#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4322446607966909193LL;
unsigned short var_2 = (unsigned short)8994;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8686732795281545943LL;
unsigned long long int var_7 = 11649636792112303774ULL;
unsigned short var_8 = (unsigned short)24235;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-79;
signed char var_11 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
