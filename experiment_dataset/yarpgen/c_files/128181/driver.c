#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 54052808;
int var_4 = -853507289;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 18166305659886751604ULL;
unsigned int var_10 = 722916087U;
unsigned int var_12 = 3804668485U;
unsigned char var_17 = (unsigned char)89;
int zero = 0;
signed char var_18 = (signed char)49;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)21339;
void init() {
}

void checksum() {
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
