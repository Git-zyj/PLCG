#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)83;
int var_10 = 1260218400;
signed char var_14 = (signed char)22;
long long int var_15 = 8499117026697063512LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15726869991063536098ULL;
unsigned long long int var_21 = 4185053792758612400ULL;
void init() {
}

void checksum() {
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
