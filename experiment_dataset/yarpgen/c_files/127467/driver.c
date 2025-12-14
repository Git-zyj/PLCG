#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1260489735549198592LL;
unsigned long long int var_1 = 14088192352213074569ULL;
short var_2 = (short)-9902;
unsigned char var_3 = (unsigned char)3;
_Bool var_7 = (_Bool)0;
long long int var_10 = -9080505885556178583LL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)57809;
long long int var_14 = -2210000406542294472LL;
int zero = 0;
unsigned long long int var_15 = 18254803969927578470ULL;
int var_16 = 1019069303;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)53257;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
