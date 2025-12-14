#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37111;
signed char var_1 = (signed char)51;
int var_3 = 1791206794;
unsigned long long int var_5 = 12334225616149137149ULL;
unsigned int var_6 = 1230676406U;
signed char var_7 = (signed char)93;
unsigned int var_13 = 129058742U;
unsigned int var_14 = 2080918140U;
long long int var_15 = -1720099093507374460LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 5493196624929259276LL;
unsigned short var_19 = (unsigned short)47113;
unsigned short var_20 = (unsigned short)30623;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
