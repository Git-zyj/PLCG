#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7661;
unsigned short var_5 = (unsigned short)11064;
signed char var_8 = (signed char)-31;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)26639;
unsigned long long int var_15 = 2450706945211504236ULL;
short var_17 = (short)-19839;
int zero = 0;
unsigned long long int var_19 = 9971956300302550929ULL;
unsigned long long int var_20 = 9197676972533986042ULL;
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
