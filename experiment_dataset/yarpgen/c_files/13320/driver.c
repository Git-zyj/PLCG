#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11304781053650978827ULL;
int var_2 = -1145823792;
int var_3 = -1923395755;
long long int var_4 = -7048405936835436155LL;
signed char var_5 = (signed char)22;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = -1644726296164603853LL;
unsigned long long int var_14 = 2230693951271839349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
