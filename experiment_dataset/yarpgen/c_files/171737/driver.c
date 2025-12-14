#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9074177015734071153LL;
long long int var_5 = 7016839725949773418LL;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)182;
int zero = 0;
unsigned char var_15 = (unsigned char)153;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2592921877367772695LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
