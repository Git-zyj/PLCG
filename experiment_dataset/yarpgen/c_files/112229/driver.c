#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7367206301865565373LL;
signed char var_5 = (signed char)-46;
signed char var_7 = (signed char)31;
unsigned long long int var_11 = 1092466799854518049ULL;
int zero = 0;
signed char var_18 = (signed char)49;
unsigned int var_19 = 1871420929U;
short var_20 = (short)25655;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
