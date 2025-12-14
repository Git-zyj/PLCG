#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4531893524193939054LL;
unsigned char var_3 = (unsigned char)175;
unsigned long long int var_6 = 5570364344904724041ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 4303562063360981092LL;
int zero = 0;
long long int var_11 = 8974179346798151531LL;
unsigned char var_12 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
