#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20799;
int var_3 = 1572296584;
long long int var_6 = -1642220814739745724LL;
signed char var_8 = (signed char)-102;
unsigned short var_14 = (unsigned short)29995;
signed char var_15 = (signed char)-13;
unsigned char var_18 = (unsigned char)165;
int zero = 0;
unsigned short var_19 = (unsigned short)11910;
unsigned long long int var_20 = 14278157068430885007ULL;
int var_21 = -1365268231;
void init() {
}

void checksum() {
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
