#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18916;
unsigned short var_3 = (unsigned short)43910;
short var_4 = (short)14015;
int var_7 = -1871462858;
int var_8 = -1903520120;
unsigned int var_9 = 3436844673U;
_Bool var_10 = (_Bool)0;
int var_11 = 1689007375;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)25924;
unsigned long long int var_14 = 16096590518118620321ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
