#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1011607188466779672ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-13018;
unsigned short var_4 = (unsigned short)29209;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)43277;
unsigned long long int var_9 = 7703144679881875150ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)43288;
long long int var_11 = -5582634921838066121LL;
unsigned long long int var_12 = 10580671607357516251ULL;
unsigned long long int var_13 = 14833238867470647988ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
