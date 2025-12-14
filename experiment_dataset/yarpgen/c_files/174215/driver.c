#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1183696953109813093LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8248525183170933951LL;
long long int var_5 = -5836418310368272197LL;
unsigned int var_7 = 671919952U;
short var_10 = (short)17419;
int zero = 0;
short var_15 = (short)5885;
unsigned short var_16 = (unsigned short)460;
signed char var_17 = (signed char)-89;
long long int var_18 = -8648790507744907721LL;
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
