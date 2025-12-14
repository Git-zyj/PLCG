#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned int var_1 = 1841510562U;
short var_5 = (short)-26547;
int var_8 = 869091740;
signed char var_9 = (signed char)77;
signed char var_14 = (signed char)0;
int zero = 0;
unsigned short var_17 = (unsigned short)16972;
unsigned long long int var_18 = 11028151953031363419ULL;
int var_19 = -1376616188;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
