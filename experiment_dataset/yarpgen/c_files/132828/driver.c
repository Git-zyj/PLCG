#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14378454322107242249ULL;
int var_7 = -920771676;
signed char var_8 = (signed char)-113;
signed char var_9 = (signed char)76;
unsigned long long int var_10 = 15687975493523038557ULL;
int zero = 0;
signed char var_13 = (signed char)-29;
unsigned long long int var_14 = 5459821796526913708ULL;
signed char var_15 = (signed char)116;
signed char var_16 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
