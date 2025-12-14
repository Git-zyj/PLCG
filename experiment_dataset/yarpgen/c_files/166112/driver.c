#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)153;
signed char var_5 = (signed char)-90;
signed char var_8 = (signed char)-113;
int var_9 = 671449241;
signed char var_10 = (signed char)46;
int var_15 = 1710907116;
int zero = 0;
signed char var_20 = (signed char)-45;
signed char var_21 = (signed char)105;
long long int var_22 = 7822634106105922134LL;
void init() {
}

void checksum() {
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
