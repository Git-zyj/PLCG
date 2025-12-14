#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6743875956011966469ULL;
unsigned long long int var_1 = 15941756081148155812ULL;
unsigned int var_2 = 2778366124U;
unsigned long long int var_3 = 9211922796075645706ULL;
unsigned int var_4 = 816901037U;
unsigned int var_5 = 3233372840U;
unsigned long long int var_6 = 15956503222662243993ULL;
unsigned int var_7 = 2609439977U;
unsigned long long int var_10 = 11181032595881870849ULL;
int zero = 0;
unsigned long long int var_11 = 2812874376104491568ULL;
unsigned int var_12 = 759652358U;
unsigned long long int var_13 = 13154056188440989047ULL;
void init() {
}

void checksum() {
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
