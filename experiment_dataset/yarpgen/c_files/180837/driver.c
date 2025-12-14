#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
int var_4 = -2124815669;
short var_7 = (short)1813;
signed char var_12 = (signed char)125;
unsigned char var_13 = (unsigned char)63;
signed char var_15 = (signed char)-44;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 696483620;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16170339325730129510ULL;
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
