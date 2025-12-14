#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13345463651246145827ULL;
long long int var_3 = -8587034277409813466LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 12054104128699090738ULL;
short var_10 = (short)26766;
int zero = 0;
int var_14 = -1068986297;
int var_15 = -966191757;
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
