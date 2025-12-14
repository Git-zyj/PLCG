#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3097087208899562094LL;
signed char var_3 = (signed char)5;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3369538142U;
long long int var_7 = -6391316325275243464LL;
int var_8 = 1445801533;
int var_10 = -1840133910;
int zero = 0;
int var_11 = 653509982;
int var_12 = 990054364;
int var_13 = 1419410623;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
