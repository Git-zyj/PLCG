#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned int var_4 = 2009216996U;
unsigned int var_5 = 42203208U;
signed char var_7 = (signed char)-41;
signed char var_10 = (signed char)26;
unsigned long long int var_12 = 12041061896115656072ULL;
unsigned long long int var_13 = 15241518933060524318ULL;
int zero = 0;
int var_17 = 211941068;
int var_18 = -120167026;
signed char var_19 = (signed char)54;
unsigned short var_20 = (unsigned short)20555;
unsigned long long int var_21 = 12862018122673465614ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
