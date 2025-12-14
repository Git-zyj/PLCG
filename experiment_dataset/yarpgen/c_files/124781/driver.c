#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17911711389316579658ULL;
signed char var_5 = (signed char)63;
unsigned long long int var_11 = 16301809853357155836ULL;
int zero = 0;
signed char var_12 = (signed char)-52;
unsigned short var_13 = (unsigned short)57781;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
