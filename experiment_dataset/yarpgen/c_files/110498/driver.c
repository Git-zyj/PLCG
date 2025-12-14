#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4296163884741163273ULL;
unsigned char var_1 = (unsigned char)46;
unsigned long long int var_2 = 5921895555538667928ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 12457966800190895078ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 17564647277845162985ULL;
unsigned long long int var_10 = 234089321064777842ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13505834281862578314ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
