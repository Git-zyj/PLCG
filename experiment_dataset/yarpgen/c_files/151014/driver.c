#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2292587451762451648LL;
unsigned short var_1 = (unsigned short)3947;
long long int var_6 = -1752302604842739908LL;
unsigned long long int var_7 = 11599995687700473146ULL;
int var_8 = -1800412778;
_Bool var_11 = (_Bool)1;
unsigned long long int var_19 = 8463046124283779630ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)61946;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
