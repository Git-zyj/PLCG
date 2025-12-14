#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11435045984925785085ULL;
unsigned int var_4 = 3019140217U;
long long int var_5 = -4672411119778358688LL;
unsigned int var_7 = 4264071664U;
long long int var_8 = 8415701985868385348LL;
short var_9 = (short)-3132;
int var_11 = -1261413356;
signed char var_15 = (signed char)-109;
short var_16 = (short)30719;
long long int var_17 = 7389976201305780638LL;
unsigned short var_18 = (unsigned short)5537;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)24035;
signed char var_21 = (signed char)63;
unsigned char var_22 = (unsigned char)210;
unsigned int var_23 = 2773212638U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
