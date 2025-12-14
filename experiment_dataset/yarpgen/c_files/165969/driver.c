#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4239462885U;
short var_2 = (short)28964;
unsigned int var_3 = 913669858U;
long long int var_4 = -5156175261714016165LL;
long long int var_7 = -2518066754799554070LL;
long long int var_10 = 5979253673811461337LL;
unsigned char var_13 = (unsigned char)75;
signed char var_15 = (signed char)-92;
unsigned char var_17 = (unsigned char)169;
int zero = 0;
unsigned int var_18 = 3328597674U;
unsigned int var_19 = 3254553902U;
unsigned int var_20 = 2037723787U;
short var_21 = (short)-27132;
unsigned char var_22 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
