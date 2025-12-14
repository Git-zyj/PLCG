#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 814066925;
_Bool var_2 = (_Bool)0;
int var_3 = 1488540579;
signed char var_5 = (signed char)126;
int var_6 = -2110794556;
long long int var_7 = 8643309110254752054LL;
signed char var_8 = (signed char)-125;
int var_11 = 1644694769;
signed char var_13 = (signed char)94;
unsigned char var_17 = (unsigned char)203;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 6053649807576935982ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
