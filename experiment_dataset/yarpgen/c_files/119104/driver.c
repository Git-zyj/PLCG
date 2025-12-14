#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)28;
int var_5 = 1595494391;
signed char var_8 = (signed char)-30;
unsigned int var_12 = 3593722613U;
signed char var_14 = (signed char)-16;
unsigned int var_16 = 540017539U;
int zero = 0;
signed char var_20 = (signed char)11;
int var_21 = -453067903;
unsigned long long int var_22 = 12350725198126489825ULL;
long long int var_23 = 247519888934612145LL;
unsigned long long int var_24 = 1270032417112804008ULL;
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
