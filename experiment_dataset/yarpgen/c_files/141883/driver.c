#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 4274462918U;
unsigned int var_10 = 1610700803U;
unsigned short var_13 = (unsigned short)50893;
unsigned char var_14 = (unsigned char)118;
unsigned long long int var_18 = 12728860796809866738ULL;
int zero = 0;
unsigned long long int var_20 = 15017911423030150235ULL;
int var_21 = 1755645802;
signed char var_22 = (signed char)-112;
void init() {
}

void checksum() {
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
