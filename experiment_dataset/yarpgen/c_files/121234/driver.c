#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)124;
signed char var_4 = (signed char)-92;
signed char var_5 = (signed char)-61;
long long int var_8 = 8374441079113099056LL;
_Bool var_10 = (_Bool)0;
int var_11 = -438654120;
unsigned short var_16 = (unsigned short)41761;
int zero = 0;
unsigned char var_18 = (unsigned char)28;
int var_19 = -329456147;
int var_20 = -1890632553;
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
