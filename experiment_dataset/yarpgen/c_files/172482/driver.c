#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 261300995170048885ULL;
long long int var_3 = -348195384758964189LL;
signed char var_6 = (signed char)-13;
unsigned long long int var_8 = 16272080011842570408ULL;
int zero = 0;
long long int var_10 = 3488631123017235085LL;
long long int var_11 = 3439307264666721814LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
