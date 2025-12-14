#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)81;
signed char var_6 = (signed char)82;
signed char var_8 = (signed char)-87;
unsigned long long int var_15 = 5462141063136747144ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15098682339954582824ULL;
unsigned long long int var_18 = 6853080685556350243ULL;
void init() {
}

void checksum() {
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
