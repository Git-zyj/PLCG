#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4037473565944115558ULL;
int var_8 = -1730854051;
long long int var_13 = -2539992153354564066LL;
unsigned int var_17 = 789379357U;
int zero = 0;
long long int var_18 = 4868875324895621859LL;
short var_19 = (short)-20155;
unsigned char var_20 = (unsigned char)188;
signed char var_21 = (signed char)-6;
int var_22 = -2129414654;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
