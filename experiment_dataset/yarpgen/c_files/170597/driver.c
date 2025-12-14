#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-6;
signed char var_9 = (signed char)-55;
unsigned char var_11 = (unsigned char)199;
unsigned int var_12 = 2817426872U;
_Bool var_13 = (_Bool)1;
long long int var_14 = -8605690392713533937LL;
int zero = 0;
long long int var_16 = 7776414921265406324LL;
int var_17 = 1686305201;
void init() {
}

void checksum() {
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
