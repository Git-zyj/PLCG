#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6710612699061868228LL;
signed char var_3 = (signed char)57;
signed char var_7 = (signed char)-40;
long long int var_13 = -8756159410097618459LL;
signed char var_14 = (signed char)-18;
int zero = 0;
signed char var_16 = (signed char)-6;
signed char var_17 = (signed char)-51;
long long int var_18 = -4947760979264311181LL;
unsigned long long int var_19 = 17405336369913660793ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
