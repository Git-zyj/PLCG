#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)218;
short var_8 = (short)12227;
int var_11 = 1366490097;
unsigned char var_14 = (unsigned char)121;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 4149214244454464108ULL;
short var_19 = (short)4592;
unsigned char var_20 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
