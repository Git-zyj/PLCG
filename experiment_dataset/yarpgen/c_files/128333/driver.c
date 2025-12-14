#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12455183073818876934ULL;
int var_2 = 655870134;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 16640552997740944815ULL;
int zero = 0;
long long int var_10 = 1322000916349424052LL;
unsigned short var_11 = (unsigned short)34664;
unsigned short var_12 = (unsigned short)55730;
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
