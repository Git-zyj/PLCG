#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)76;
unsigned int var_5 = 4086589090U;
long long int var_6 = 7982050634574657214LL;
signed char var_13 = (signed char)39;
signed char var_16 = (signed char)43;
long long int var_17 = 8096533354596810961LL;
int zero = 0;
signed char var_20 = (signed char)47;
unsigned int var_21 = 235522843U;
void init() {
}

void checksum() {
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
