#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-71;
long long int var_8 = -2274701536791923383LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned short var_17 = (unsigned short)45209;
int zero = 0;
unsigned long long int var_18 = 4445154590615835586ULL;
signed char var_19 = (signed char)-66;
long long int var_20 = -4902889534866425942LL;
unsigned long long int var_21 = 3590099791198775620ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
