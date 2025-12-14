#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6691947960340908013LL;
long long int var_1 = 4042778931421943555LL;
long long int var_2 = 8443397552938303385LL;
long long int var_5 = 9191564823220559884LL;
long long int var_7 = 7929184133778237464LL;
long long int var_8 = 109504033565077482LL;
int zero = 0;
long long int var_12 = 1589439915690143716LL;
long long int var_13 = -7280871899814255267LL;
long long int var_14 = -2241386193094910676LL;
long long int var_15 = 7656573348299166432LL;
long long int var_16 = 6490830945171476702LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
