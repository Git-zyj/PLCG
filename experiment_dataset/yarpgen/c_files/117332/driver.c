#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 994252124;
_Bool var_4 = (_Bool)1;
short var_11 = (short)26246;
unsigned short var_14 = (unsigned short)9527;
int zero = 0;
short var_19 = (short)-25807;
unsigned char var_20 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
