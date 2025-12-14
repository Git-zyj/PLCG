#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18519;
unsigned long long int var_4 = 8157394986254986066ULL;
int var_5 = -293810094;
int var_6 = 1472080551;
short var_7 = (short)30619;
unsigned long long int var_8 = 4534683935146656818ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 12179185251281825923ULL;
unsigned long long int var_14 = 15158304340054090260ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
