#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3162507283U;
long long int var_7 = 6543827056960096562LL;
signed char var_11 = (signed char)110;
int zero = 0;
int var_13 = -562195533;
unsigned long long int var_14 = 11936461810582840ULL;
long long int var_15 = -7289916267591310607LL;
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
