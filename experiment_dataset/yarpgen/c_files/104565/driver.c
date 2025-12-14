#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -410994631;
unsigned int var_3 = 1267963587U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)9486;
int var_6 = -1911274394;
unsigned int var_7 = 1628021188U;
_Bool var_8 = (_Bool)1;
int var_9 = 17594846;
unsigned long long int var_10 = 15404759904633778828ULL;
int zero = 0;
int var_11 = -2079926409;
_Bool var_12 = (_Bool)1;
short var_13 = (short)14114;
int var_14 = 323606707;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
