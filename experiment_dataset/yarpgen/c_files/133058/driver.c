#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1266319054;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 18089205302244781094ULL;
unsigned long long int var_7 = 4800681072831301939ULL;
signed char var_10 = (signed char)-92;
int zero = 0;
unsigned char var_13 = (unsigned char)32;
unsigned short var_14 = (unsigned short)227;
signed char var_15 = (signed char)41;
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
