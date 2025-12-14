#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 2727979676238240961ULL;
signed char var_3 = (signed char)-72;
signed char var_4 = (signed char)28;
unsigned int var_7 = 1464264542U;
unsigned short var_8 = (unsigned short)60963;
int zero = 0;
unsigned int var_10 = 4082951012U;
unsigned short var_11 = (unsigned short)4022;
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
