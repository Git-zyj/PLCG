#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 945139873;
unsigned int var_3 = 2723013724U;
int var_4 = -2070519154;
unsigned long long int var_9 = 7687764235688618076ULL;
unsigned long long int var_10 = 6929293022564960406ULL;
signed char var_13 = (signed char)20;
_Bool var_14 = (_Bool)0;
int var_15 = 276020141;
unsigned int var_17 = 3763278516U;
int zero = 0;
signed char var_18 = (signed char)-75;
int var_19 = -1916117055;
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
