#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
unsigned char var_6 = (unsigned char)17;
unsigned long long int var_8 = 17967358075500325375ULL;
long long int var_9 = 8993879450914280004LL;
int var_11 = 1721872289;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-73;
unsigned long long int var_14 = 6824259185361904276ULL;
unsigned long long int var_15 = 10205321538498328123ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 14978863579769501907ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
