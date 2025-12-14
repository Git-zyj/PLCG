#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 825175910;
int var_2 = -674748764;
int var_3 = -1837833552;
short var_6 = (short)1834;
_Bool var_9 = (_Bool)1;
int var_12 = -996144725;
int var_13 = -102384833;
long long int var_14 = -617037923206275054LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1765386043;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
