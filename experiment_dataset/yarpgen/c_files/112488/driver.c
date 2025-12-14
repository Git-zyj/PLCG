#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1145912949;
unsigned long long int var_4 = 16837351933267531461ULL;
_Bool var_6 = (_Bool)0;
int var_7 = 1740128361;
int var_11 = 1371965867;
unsigned char var_15 = (unsigned char)107;
int zero = 0;
short var_17 = (short)-25547;
unsigned int var_18 = 696184848U;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 2920045413408414501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
