#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
int var_2 = -908246489;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 11944843667015405576ULL;
unsigned long long int var_8 = 10529333903290178516ULL;
signed char var_9 = (signed char)-34;
unsigned long long int var_12 = 12353251956948679973ULL;
unsigned char var_14 = (unsigned char)70;
unsigned long long int var_15 = 720400432070598431ULL;
int zero = 0;
signed char var_17 = (signed char)37;
signed char var_18 = (signed char)-76;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 250222325U;
_Bool var_21 = (_Bool)0;
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
