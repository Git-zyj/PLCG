#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
int var_2 = -278385593;
unsigned long long int var_4 = 6374827216802642524ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 3566129939U;
unsigned short var_10 = (unsigned short)331;
unsigned short var_11 = (unsigned short)14019;
int zero = 0;
unsigned short var_19 = (unsigned short)13139;
unsigned long long int var_20 = 4722593436263209381ULL;
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
