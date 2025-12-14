#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
short var_4 = (short)25492;
unsigned char var_14 = (unsigned char)179;
int zero = 0;
int var_17 = 653224881;
unsigned long long int var_18 = 6734816587045804881ULL;
short var_19 = (short)29437;
unsigned long long int var_20 = 10719994546407034670ULL;
unsigned short var_21 = (unsigned short)51616;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
