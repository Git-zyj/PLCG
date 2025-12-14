#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)186;
signed char var_7 = (signed char)18;
signed char var_8 = (signed char)15;
long long int var_9 = 1561763988465279180LL;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-12;
int zero = 0;
unsigned long long int var_18 = 1091263620234788757ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6730199371721174077LL;
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
