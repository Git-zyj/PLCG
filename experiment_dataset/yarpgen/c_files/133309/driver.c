#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 3434494787U;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-27986;
int var_12 = -886964788;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
