#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59002;
signed char var_10 = (signed char)57;
unsigned short var_12 = (unsigned short)21882;
signed char var_13 = (signed char)-99;
long long int var_17 = 666140297249494674LL;
int zero = 0;
long long int var_18 = -7544946521501948748LL;
unsigned short var_19 = (unsigned short)60866;
long long int var_20 = -5520949704881168506LL;
signed char var_21 = (signed char)-18;
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
