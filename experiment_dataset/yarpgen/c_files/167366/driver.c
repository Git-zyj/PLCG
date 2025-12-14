#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6455449508874073875LL;
signed char var_4 = (signed char)-73;
signed char var_6 = (signed char)125;
unsigned int var_7 = 3878075966U;
unsigned long long int var_8 = 17806801429450519935ULL;
unsigned short var_11 = (unsigned short)64804;
int zero = 0;
long long int var_12 = -6283839603878968758LL;
signed char var_13 = (signed char)-76;
void init() {
}

void checksum() {
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
