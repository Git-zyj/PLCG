#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10878131798547038267ULL;
unsigned long long int var_4 = 16505468238215917946ULL;
unsigned int var_5 = 1329691274U;
int var_6 = 2141963923;
signed char var_8 = (signed char)76;
long long int var_11 = -6101055119482998660LL;
int var_13 = -447976571;
unsigned long long int var_15 = 1209117003570436701ULL;
int var_16 = -113824980;
int zero = 0;
unsigned long long int var_18 = 16659887863880812528ULL;
long long int var_19 = -5339802510112293621LL;
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
