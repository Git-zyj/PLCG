#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1769151605578475983LL;
unsigned long long int var_1 = 3306943087515177506ULL;
long long int var_3 = 544252489550398015LL;
unsigned int var_4 = 1544432679U;
unsigned int var_8 = 684310615U;
int var_11 = -205277502;
int zero = 0;
signed char var_12 = (signed char)-12;
short var_13 = (short)-32259;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
