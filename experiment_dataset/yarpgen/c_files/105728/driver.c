#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6724069709773114358LL;
long long int var_13 = -7654594620447772904LL;
int var_14 = 611298396;
unsigned char var_18 = (unsigned char)89;
int zero = 0;
long long int var_19 = 5388130040074221206LL;
unsigned char var_20 = (unsigned char)29;
long long int var_21 = -5340922557102584974LL;
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
