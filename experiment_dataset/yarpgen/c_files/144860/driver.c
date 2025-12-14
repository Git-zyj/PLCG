#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4211352987739629726ULL;
unsigned long long int var_5 = 13314877386570156816ULL;
signed char var_7 = (signed char)-103;
unsigned long long int var_8 = 11426282603019236594ULL;
unsigned long long int var_9 = 17519399776676482610ULL;
signed char var_12 = (signed char)-57;
unsigned long long int var_15 = 7866368057227466681ULL;
int zero = 0;
signed char var_16 = (signed char)-9;
signed char var_17 = (signed char)-79;
unsigned long long int var_18 = 4914414072173285261ULL;
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
