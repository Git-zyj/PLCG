#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 584234637U;
unsigned int var_5 = 816994256U;
signed char var_8 = (signed char)61;
_Bool var_9 = (_Bool)1;
unsigned int var_14 = 2387130711U;
int zero = 0;
unsigned long long int var_15 = 2560552056835565651ULL;
unsigned long long int var_16 = 18429723008946493708ULL;
int var_17 = 1414399480;
signed char var_18 = (signed char)-66;
short var_19 = (short)-5224;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
