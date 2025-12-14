#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 12672304756238715028ULL;
unsigned long long int var_7 = 644104808416189914ULL;
unsigned short var_9 = (unsigned short)57767;
int var_10 = 1596927869;
int zero = 0;
unsigned short var_13 = (unsigned short)2785;
unsigned short var_14 = (unsigned short)28133;
unsigned long long int var_15 = 3400523525081919256ULL;
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
