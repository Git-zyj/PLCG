#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27568;
signed char var_1 = (signed char)-82;
long long int var_5 = -9017477083242584818LL;
unsigned long long int var_9 = 9385216873399887877ULL;
int zero = 0;
signed char var_11 = (signed char)-76;
long long int var_12 = -2642515381617544955LL;
unsigned long long int var_13 = 18404938846242822799ULL;
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
