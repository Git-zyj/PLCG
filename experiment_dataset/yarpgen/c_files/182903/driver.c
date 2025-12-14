#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1558121565U;
unsigned long long int var_6 = 13088026382110855152ULL;
short var_9 = (short)-11917;
unsigned long long int var_11 = 12127732902513412913ULL;
int zero = 0;
unsigned int var_15 = 1927944227U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-109;
int var_18 = 1999775872;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
