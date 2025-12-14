#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14910102822964738059ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)219;
long long int var_8 = -1110997955545094114LL;
long long int var_9 = 4482454155570056940LL;
int zero = 0;
int var_14 = -1836412892;
int var_15 = 421538728;
unsigned int var_16 = 703435368U;
short var_17 = (short)-379;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
