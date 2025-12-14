#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5947193717116528188LL;
int var_5 = 1414228794;
signed char var_6 = (signed char)19;
long long int var_10 = 2501285652189645699LL;
long long int var_11 = -4829219846943299586LL;
signed char var_13 = (signed char)76;
int zero = 0;
signed char var_14 = (signed char)-76;
long long int var_15 = 7309041127888107983LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
