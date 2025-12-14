#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1167006381;
unsigned short var_1 = (unsigned short)31911;
unsigned int var_3 = 4145962485U;
unsigned int var_4 = 4013360710U;
signed char var_6 = (signed char)53;
signed char var_8 = (signed char)91;
int var_9 = 593581719;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1005062930432617524LL;
unsigned int var_15 = 4002586171U;
int var_16 = 2033819293;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
