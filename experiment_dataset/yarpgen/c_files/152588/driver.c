#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)89;
unsigned long long int var_3 = 3490752201820707498ULL;
unsigned short var_5 = (unsigned short)12491;
int var_7 = 2129640646;
unsigned short var_9 = (unsigned short)7526;
long long int var_10 = 9120127821987505362LL;
unsigned short var_11 = (unsigned short)3560;
long long int var_13 = -1921516346068804254LL;
int zero = 0;
signed char var_16 = (signed char)28;
unsigned short var_17 = (unsigned short)37282;
_Bool var_18 = (_Bool)1;
long long int var_19 = 4423999469754449884LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
