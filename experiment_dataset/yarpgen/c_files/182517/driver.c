#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3322792441U;
long long int var_3 = 8434150267593734762LL;
signed char var_5 = (signed char)-100;
unsigned long long int var_6 = 17661422177420084725ULL;
int var_11 = -1848326391;
signed char var_13 = (signed char)-49;
int zero = 0;
unsigned long long int var_15 = 9999237835115314668ULL;
long long int var_16 = 7017707182159383579LL;
void init() {
}

void checksum() {
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
