#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22298;
unsigned short var_3 = (unsigned short)3212;
short var_4 = (short)-25057;
long long int var_6 = -1530380222081684315LL;
short var_10 = (short)25130;
unsigned long long int var_12 = 5193557285939293867ULL;
short var_14 = (short)-7027;
signed char var_15 = (signed char)-35;
int var_16 = -499917011;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
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
