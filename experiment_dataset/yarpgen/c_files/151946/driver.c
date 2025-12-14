#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1471412329;
long long int var_3 = -5508842208127899202LL;
unsigned long long int var_6 = 1025429520475488113ULL;
unsigned int var_7 = 2724707414U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 267559451U;
long long int var_10 = 8855811805364776146LL;
long long int var_13 = -5287719143852881358LL;
unsigned short var_14 = (unsigned short)41534;
long long int var_17 = -6978972488640193308LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -871376713;
int var_21 = 1000890394;
unsigned long long int var_22 = 7029136075671980798ULL;
void init() {
}

void checksum() {
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
