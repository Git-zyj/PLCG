#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1792414757U;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)-24;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 6967760554084647768ULL;
unsigned long long int var_19 = 174439301012998614ULL;
unsigned short var_20 = (unsigned short)31271;
signed char var_21 = (signed char)-90;
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
