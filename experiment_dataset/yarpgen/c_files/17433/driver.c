#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)145;
unsigned long long int var_5 = 12054624252294125823ULL;
unsigned char var_8 = (unsigned char)187;
unsigned long long int var_9 = 2464303117252686676ULL;
signed char var_11 = (signed char)60;
unsigned long long int var_14 = 4422110457799801003ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-32386;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
