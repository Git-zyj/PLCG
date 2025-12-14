#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-268;
unsigned long long int var_1 = 11783876352328364564ULL;
_Bool var_2 = (_Bool)1;
int var_13 = -590961988;
unsigned long long int var_18 = 10566217711523558219ULL;
long long int var_19 = 5165114440053037627LL;
int zero = 0;
long long int var_20 = 6505902066162080283LL;
unsigned int var_21 = 3422766222U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)6;
unsigned char var_24 = (unsigned char)244;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
