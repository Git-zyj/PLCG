#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3300130227927588376LL;
long long int var_1 = 2553770791130480093LL;
short var_2 = (short)16282;
_Bool var_4 = (_Bool)1;
short var_5 = (short)19488;
unsigned long long int var_7 = 12513436798756016620ULL;
unsigned short var_9 = (unsigned short)34697;
unsigned long long int var_10 = 4542526147595276751ULL;
unsigned long long int var_12 = 8240437719641333099ULL;
int zero = 0;
unsigned long long int var_15 = 4578826161620813135ULL;
int var_16 = 1461377911;
int var_17 = 1605874421;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
