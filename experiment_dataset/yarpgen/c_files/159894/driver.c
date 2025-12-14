#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned long long int var_1 = 6150354746461437287ULL;
long long int var_2 = -5633551152511207774LL;
short var_3 = (short)-8823;
long long int var_5 = -1226470266700735152LL;
unsigned long long int var_6 = 5469076765797047102ULL;
int var_8 = -494062115;
short var_9 = (short)-3053;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 11067042071975697509ULL;
long long int var_12 = 2393685710646176661LL;
signed char var_13 = (signed char)51;
unsigned short var_14 = (unsigned short)311;
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
