#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12283041447007104542ULL;
unsigned short var_4 = (unsigned short)53800;
unsigned long long int var_5 = 13235216959582040894ULL;
unsigned int var_8 = 1422446011U;
long long int var_10 = -8170958441070257849LL;
unsigned long long int var_13 = 13764040158548109350ULL;
int zero = 0;
unsigned long long int var_14 = 15153810219126389540ULL;
unsigned int var_15 = 3593049723U;
unsigned int var_16 = 3918244773U;
void init() {
}

void checksum() {
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
