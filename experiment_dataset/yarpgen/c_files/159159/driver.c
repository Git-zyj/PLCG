#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
long long int var_2 = 5462051118863138221LL;
long long int var_3 = 3369828532446322198LL;
int var_5 = -437193699;
unsigned char var_8 = (unsigned char)159;
int var_10 = -689451736;
int zero = 0;
unsigned char var_11 = (unsigned char)151;
long long int var_12 = 5785399630506316813LL;
int var_13 = 398116880;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
