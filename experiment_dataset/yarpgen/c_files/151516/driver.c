#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11514;
unsigned long long int var_4 = 17535017204366430394ULL;
unsigned short var_5 = (unsigned short)27037;
unsigned long long int var_6 = 10480899529814707437ULL;
unsigned long long int var_9 = 9298866520808358567ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)25595;
short var_11 = (short)14923;
unsigned int var_12 = 2642845750U;
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
