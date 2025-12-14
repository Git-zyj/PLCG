#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2339838553U;
long long int var_2 = -6681975652436549267LL;
unsigned int var_3 = 3716758065U;
unsigned long long int var_5 = 14747930433820101275ULL;
unsigned int var_8 = 2458645426U;
int zero = 0;
long long int var_10 = -6845525747275166278LL;
unsigned int var_11 = 2893583355U;
short var_12 = (short)8369;
int var_13 = -1152621251;
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
