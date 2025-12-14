#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
short var_4 = (short)-779;
unsigned long long int var_16 = 17078285658413080343ULL;
short var_17 = (short)20626;
int zero = 0;
unsigned long long int var_20 = 12562386881482067925ULL;
signed char var_21 = (signed char)72;
long long int var_22 = 624116439105965281LL;
signed char var_23 = (signed char)96;
long long int var_24 = 2328759617403419577LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
