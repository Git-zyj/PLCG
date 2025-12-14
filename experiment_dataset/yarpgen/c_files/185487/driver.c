#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1967394975713781974LL;
unsigned int var_1 = 3630345337U;
unsigned char var_2 = (unsigned char)253;
long long int var_13 = 1489553189922438653LL;
int var_18 = -320434359;
int zero = 0;
unsigned int var_19 = 4085585446U;
signed char var_20 = (signed char)52;
unsigned int var_21 = 3373702129U;
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
