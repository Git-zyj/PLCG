#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 696802170;
unsigned long long int var_7 = 13726603064187219892ULL;
int var_8 = 637620047;
int var_9 = -1951599961;
unsigned long long int var_10 = 16832944610171464484ULL;
int var_11 = -1301111230;
int var_15 = 1404238332;
int var_17 = 226745293;
int zero = 0;
signed char var_18 = (signed char)-119;
unsigned long long int var_19 = 12611238331341540217ULL;
signed char var_20 = (signed char)-31;
unsigned long long int var_21 = 7683059202101900338ULL;
void init() {
}

void checksum() {
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
