#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)661;
signed char var_1 = (signed char)5;
short var_4 = (short)8601;
signed char var_5 = (signed char)-1;
signed char var_7 = (signed char)-112;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 10145162890974022964ULL;
unsigned char var_10 = (unsigned char)30;
long long int var_11 = 5501802324494077032LL;
unsigned int var_12 = 1204384090U;
int zero = 0;
unsigned int var_16 = 170051003U;
int var_17 = 961530049;
unsigned char var_18 = (unsigned char)17;
long long int var_19 = -3556578306738235588LL;
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
