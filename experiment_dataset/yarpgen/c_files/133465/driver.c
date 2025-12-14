#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
unsigned long long int var_1 = 8046416271726035975ULL;
signed char var_3 = (signed char)-79;
int var_7 = 1980928440;
unsigned char var_8 = (unsigned char)62;
unsigned short var_10 = (unsigned short)52212;
signed char var_13 = (signed char)-71;
int zero = 0;
signed char var_18 = (signed char)26;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
