#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1423921498735509521LL;
int var_4 = -953867356;
_Bool var_5 = (_Bool)1;
short var_13 = (short)-27190;
signed char var_17 = (signed char)18;
int zero = 0;
signed char var_20 = (signed char)-34;
unsigned long long int var_21 = 1614502764575954873ULL;
void init() {
}

void checksum() {
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
