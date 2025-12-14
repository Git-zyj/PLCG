#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1502360033;
long long int var_5 = -1752916165338752867LL;
unsigned long long int var_6 = 231354522364869774ULL;
int var_8 = 703755807;
signed char var_9 = (signed char)-120;
int zero = 0;
unsigned char var_10 = (unsigned char)181;
_Bool var_11 = (_Bool)0;
int var_12 = 1257678192;
signed char var_13 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
