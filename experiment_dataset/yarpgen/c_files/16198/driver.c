#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12812695738114509167ULL;
unsigned long long int var_5 = 15250032769259235628ULL;
long long int var_6 = 5903641663020398628LL;
unsigned long long int var_8 = 11886717927372013453ULL;
unsigned long long int var_10 = 4538505441152467694ULL;
unsigned char var_12 = (unsigned char)89;
long long int var_13 = -119565621848088429LL;
int zero = 0;
long long int var_18 = -2904386482146306374LL;
long long int var_19 = -7652475831037220725LL;
short var_20 = (short)13683;
unsigned long long int var_21 = 6717584255858588330ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
