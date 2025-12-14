#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4107021042368047781LL;
unsigned int var_4 = 2847258078U;
signed char var_9 = (signed char)49;
int var_11 = -1326619626;
long long int var_12 = -7351002390311667387LL;
unsigned long long int var_16 = 10705958172274028385ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)14360;
unsigned int var_20 = 1414476791U;
unsigned long long int var_21 = 14779094317136816825ULL;
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
