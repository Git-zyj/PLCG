#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-100;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_5 = (short)19776;
int var_6 = -1817922995;
short var_9 = (short)30106;
int zero = 0;
short var_13 = (short)-26670;
unsigned short var_14 = (unsigned short)22743;
unsigned long long int var_15 = 15759177537790682268ULL;
short var_16 = (short)4986;
short var_17 = (short)5451;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
