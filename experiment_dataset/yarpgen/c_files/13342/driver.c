#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8534;
short var_4 = (short)-11101;
int var_6 = 1380023663;
int var_8 = 1957147225;
long long int var_9 = -2922802296467660687LL;
long long int var_10 = 5893974854850090109LL;
int zero = 0;
signed char var_12 = (signed char)-51;
unsigned long long int var_13 = 6436290413081909057ULL;
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
