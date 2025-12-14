#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5912110745399543996ULL;
unsigned long long int var_3 = 5747989055719500932ULL;
unsigned short var_4 = (unsigned short)22132;
signed char var_6 = (signed char)-30;
unsigned long long int var_8 = 4422878167517473864ULL;
unsigned short var_12 = (unsigned short)33976;
signed char var_15 = (signed char)51;
int zero = 0;
signed char var_19 = (signed char)120;
signed char var_20 = (signed char)-3;
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
