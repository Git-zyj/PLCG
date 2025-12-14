#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8129468735874463382LL;
unsigned long long int var_7 = 2071819251257521701ULL;
signed char var_9 = (signed char)-24;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)246;
int zero = 0;
signed char var_14 = (signed char)41;
signed char var_15 = (signed char)-57;
void init() {
}

void checksum() {
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
