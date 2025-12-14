#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63398;
short var_4 = (short)-12652;
unsigned long long int var_5 = 11212530303735607408ULL;
unsigned long long int var_6 = 14197963934550014071ULL;
unsigned long long int var_7 = 14529299810740203702ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)55321;
unsigned short var_14 = (unsigned short)19499;
unsigned short var_15 = (unsigned short)45162;
unsigned long long int var_16 = 17613575482478565108ULL;
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
