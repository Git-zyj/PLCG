#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7051878918154713092ULL;
short var_1 = (short)-18964;
signed char var_3 = (signed char)40;
unsigned char var_4 = (unsigned char)31;
long long int var_7 = 53456028982447140LL;
long long int var_9 = 3094022222456125928LL;
int zero = 0;
int var_10 = 1280522678;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
