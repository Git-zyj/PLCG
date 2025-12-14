#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1355102547154213266LL;
long long int var_2 = 6725590972168493559LL;
_Bool var_3 = (_Bool)1;
long long int var_5 = 8153692107536156779LL;
unsigned long long int var_8 = 7682774633333363694ULL;
int var_11 = -1996477034;
short var_13 = (short)8336;
int zero = 0;
int var_14 = -1387417621;
signed char var_15 = (signed char)-121;
unsigned long long int var_16 = 12612584087405113415ULL;
unsigned long long int var_17 = 8477089057759881266ULL;
int var_18 = 782184426;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
