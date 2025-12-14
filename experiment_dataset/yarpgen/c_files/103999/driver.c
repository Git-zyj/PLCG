#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2685830772U;
unsigned long long int var_8 = 5842999168723093739ULL;
signed char var_9 = (signed char)-10;
signed char var_15 = (signed char)-73;
unsigned long long int var_17 = 13549418424113442645ULL;
int zero = 0;
unsigned int var_20 = 2823667558U;
unsigned long long int var_21 = 12496867197071392490ULL;
unsigned short var_22 = (unsigned short)59018;
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
