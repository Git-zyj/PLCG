#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 10164093;
unsigned char var_2 = (unsigned char)30;
long long int var_4 = 5474207707285800024LL;
unsigned int var_6 = 3853432667U;
int var_7 = 518795859;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 262900042;
unsigned long long int var_12 = 8670483304714218930ULL;
signed char var_13 = (signed char)24;
unsigned long long int var_14 = 2685388832274531696ULL;
unsigned char var_15 = (unsigned char)220;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
