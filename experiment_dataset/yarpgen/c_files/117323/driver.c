#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9276;
signed char var_2 = (signed char)-13;
unsigned long long int var_9 = 11888741477076455861ULL;
unsigned long long int var_11 = 5491489368575851880ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 5222733784586702491ULL;
long long int var_19 = 5162554076798025880LL;
unsigned long long int var_20 = 14444776750720943182ULL;
signed char var_21 = (signed char)-30;
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
