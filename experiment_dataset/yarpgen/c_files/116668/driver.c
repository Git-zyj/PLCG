#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17579;
signed char var_2 = (signed char)-54;
short var_3 = (short)11251;
_Bool var_4 = (_Bool)0;
int var_6 = 1928089019;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-4527;
int zero = 0;
int var_12 = -1227693920;
int var_13 = -789574669;
unsigned long long int var_14 = 11638297497469436762ULL;
long long int var_15 = 9014474153503970607LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
