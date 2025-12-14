#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)10728;
long long int var_6 = 2157625799579343901LL;
long long int var_8 = 7341356803264844627LL;
unsigned short var_12 = (unsigned short)5590;
long long int var_13 = -1449469994895880306LL;
signed char var_14 = (signed char)-125;
int zero = 0;
unsigned short var_18 = (unsigned short)59161;
long long int var_19 = -4409921737530930695LL;
long long int var_20 = -7630906945050674254LL;
signed char var_21 = (signed char)-77;
long long int var_22 = 8541414989765113075LL;
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
