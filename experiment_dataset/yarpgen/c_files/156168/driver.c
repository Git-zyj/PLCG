#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)124;
_Bool var_7 = (_Bool)0;
int var_9 = -538764791;
unsigned long long int var_10 = 13306103468362261594ULL;
unsigned char var_11 = (unsigned char)124;
unsigned short var_17 = (unsigned short)32489;
int zero = 0;
int var_20 = 1686958537;
unsigned int var_21 = 1593597705U;
unsigned int var_22 = 96340546U;
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
