#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 1607495351822318822LL;
long long int var_11 = 4505271789656725137LL;
short var_15 = (short)-30688;
int zero = 0;
int var_19 = 799583741;
short var_20 = (short)-2486;
unsigned short var_21 = (unsigned short)40608;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
