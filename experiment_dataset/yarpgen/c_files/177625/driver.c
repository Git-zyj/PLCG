#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 992126613U;
unsigned int var_6 = 3287292271U;
_Bool var_8 = (_Bool)1;
long long int var_12 = 8850146983597610772LL;
unsigned short var_19 = (unsigned short)295;
int zero = 0;
long long int var_20 = -6274466896125963100LL;
unsigned short var_21 = (unsigned short)56698;
unsigned int var_22 = 4155002316U;
signed char var_23 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
