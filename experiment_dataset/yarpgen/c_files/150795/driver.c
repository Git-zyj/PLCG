#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-73;
short var_4 = (short)-18895;
signed char var_12 = (signed char)-92;
short var_14 = (short)-27037;
signed char var_15 = (signed char)30;
int zero = 0;
signed char var_18 = (signed char)-28;
unsigned int var_19 = 2533077838U;
short var_20 = (short)-1202;
unsigned int var_21 = 878323133U;
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
