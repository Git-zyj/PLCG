#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9121486838847563498LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_9 = (short)-19389;
short var_11 = (short)-9567;
long long int var_13 = -2321930420264651743LL;
int zero = 0;
short var_18 = (short)-10115;
short var_19 = (short)212;
unsigned char var_20 = (unsigned char)101;
int var_21 = 425782592;
short var_22 = (short)4921;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
