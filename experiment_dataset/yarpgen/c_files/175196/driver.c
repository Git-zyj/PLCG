#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26959;
signed char var_1 = (signed char)-127;
unsigned long long int var_3 = 16075230175775906964ULL;
_Bool var_4 = (_Bool)1;
short var_11 = (short)17877;
unsigned int var_12 = 2390536130U;
int zero = 0;
int var_13 = 1281069180;
signed char var_14 = (signed char)1;
unsigned char var_15 = (unsigned char)47;
int var_16 = 961492838;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
