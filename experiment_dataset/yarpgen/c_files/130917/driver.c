#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 407899661;
int var_3 = 1090927050;
unsigned long long int var_5 = 731589805199892656ULL;
unsigned short var_7 = (unsigned short)11356;
int var_8 = 621211793;
int var_10 = 1788896372;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)-102;
unsigned long long int var_17 = 4288005526419459927ULL;
int zero = 0;
short var_19 = (short)23090;
short var_20 = (short)9496;
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
