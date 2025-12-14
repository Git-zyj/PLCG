#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6617875600435779811ULL;
short var_6 = (short)14096;
signed char var_7 = (signed char)22;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)58;
int var_13 = 1493325933;
int zero = 0;
short var_18 = (short)193;
signed char var_19 = (signed char)18;
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
