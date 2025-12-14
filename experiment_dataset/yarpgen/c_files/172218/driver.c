#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6514009117337887302ULL;
unsigned short var_4 = (unsigned short)61938;
unsigned char var_5 = (unsigned char)187;
unsigned long long int var_6 = 17906022961942115760ULL;
long long int var_7 = -9215867418019269201LL;
long long int var_8 = -4236241859332988479LL;
unsigned int var_10 = 2365891211U;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)19633;
unsigned long long int var_13 = 3079911403513806221ULL;
unsigned long long int var_14 = 4819510929962437208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
