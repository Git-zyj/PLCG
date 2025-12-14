#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6108324267161522408ULL;
unsigned int var_3 = 3292372936U;
signed char var_15 = (signed char)43;
long long int var_17 = 3702855174727642298LL;
int zero = 0;
unsigned long long int var_18 = 5689330114777395195ULL;
long long int var_19 = 7059514991645800286LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
