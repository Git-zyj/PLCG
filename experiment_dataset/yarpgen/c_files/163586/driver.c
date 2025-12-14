#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2126161009U;
unsigned int var_1 = 2075274867U;
long long int var_3 = -3044152723299915429LL;
unsigned long long int var_5 = 13325212884218825076ULL;
unsigned short var_6 = (unsigned short)216;
long long int var_8 = -669743561361389912LL;
long long int var_9 = -9039885935516133991LL;
int zero = 0;
signed char var_10 = (signed char)-68;
unsigned short var_11 = (unsigned short)61050;
signed char var_12 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
