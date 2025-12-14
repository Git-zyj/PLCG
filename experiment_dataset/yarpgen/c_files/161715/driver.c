#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2626205236U;
signed char var_2 = (signed char)-31;
long long int var_3 = 9143457995571646852LL;
unsigned int var_5 = 4126021238U;
unsigned short var_6 = (unsigned short)57428;
unsigned char var_8 = (unsigned char)9;
unsigned long long int var_9 = 2670774984831508288ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1330277194795774277LL;
int var_12 = -377403330;
_Bool var_13 = (_Bool)0;
long long int var_14 = -982938941527629327LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
