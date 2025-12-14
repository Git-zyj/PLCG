#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-109;
long long int var_7 = -7529838152780377826LL;
int var_9 = 1567658756;
unsigned char var_11 = (unsigned char)31;
int var_12 = 1766853011;
unsigned int var_17 = 3995736884U;
int zero = 0;
unsigned long long int var_19 = 15179040745001552919ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 16231276010954850454ULL;
int var_22 = 1468866676;
long long int var_23 = -5382797010187213715LL;
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
