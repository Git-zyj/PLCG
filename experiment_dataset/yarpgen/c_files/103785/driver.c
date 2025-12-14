#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13264042591976988713ULL;
unsigned int var_3 = 2799523796U;
int var_6 = -944768383;
long long int var_7 = -8273816466901994077LL;
signed char var_8 = (signed char)-12;
signed char var_9 = (signed char)-18;
int zero = 0;
unsigned long long int var_13 = 15399324626889898419ULL;
signed char var_14 = (signed char)97;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
