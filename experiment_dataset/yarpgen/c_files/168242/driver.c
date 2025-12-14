#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2658216483879455400LL;
long long int var_4 = -7149157587371448471LL;
unsigned int var_5 = 3021594259U;
unsigned int var_7 = 1151844638U;
long long int var_8 = -2906710758650875075LL;
unsigned short var_9 = (unsigned short)55895;
long long int var_10 = -7297927359982142808LL;
int zero = 0;
unsigned short var_12 = (unsigned short)59407;
unsigned int var_13 = 3025067948U;
int var_14 = 637294130;
signed char var_15 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
