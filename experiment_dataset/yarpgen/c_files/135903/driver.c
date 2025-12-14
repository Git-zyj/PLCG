#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
unsigned short var_3 = (unsigned short)56763;
unsigned int var_4 = 1950314318U;
int var_13 = -1646879003;
int zero = 0;
unsigned long long int var_18 = 224092997995357205ULL;
signed char var_19 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
