#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-9;
unsigned short var_2 = (unsigned short)60362;
unsigned int var_5 = 3411295986U;
unsigned long long int var_8 = 259878600470427446ULL;
int zero = 0;
unsigned int var_18 = 4149049881U;
long long int var_19 = -5944551124436459938LL;
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
