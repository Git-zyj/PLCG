#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5631909339578417761ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)13139;
unsigned char var_6 = (unsigned char)138;
short var_7 = (short)18792;
unsigned char var_9 = (unsigned char)58;
signed char var_10 = (signed char)27;
short var_13 = (short)-10828;
int zero = 0;
signed char var_14 = (signed char)62;
unsigned int var_15 = 563756383U;
void init() {
}

void checksum() {
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
