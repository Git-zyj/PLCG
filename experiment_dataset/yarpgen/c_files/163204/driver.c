#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
unsigned int var_1 = 726188699U;
int var_2 = -1796790445;
int var_3 = -1047392082;
signed char var_4 = (signed char)-83;
unsigned int var_5 = 1214477565U;
int var_7 = 2146529199;
unsigned int var_10 = 1595561700U;
unsigned int var_15 = 500151906U;
unsigned char var_16 = (unsigned char)193;
int zero = 0;
signed char var_18 = (signed char)61;
signed char var_19 = (signed char)124;
signed char var_20 = (signed char)-40;
int var_21 = -734552928;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
