#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4608058578964633348LL;
short var_3 = (short)-12071;
unsigned long long int var_9 = 16442266535362371163ULL;
unsigned int var_13 = 2446683371U;
long long int var_14 = -4270051599529654368LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 3444014885752588656ULL;
unsigned long long int var_20 = 15836324965987527200ULL;
long long int var_21 = 515409016116300642LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
