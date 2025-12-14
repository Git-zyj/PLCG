#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
unsigned int var_1 = 3799331193U;
unsigned long long int var_2 = 13803165383530531605ULL;
long long int var_4 = 8199873410694619839LL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-106;
signed char var_8 = (signed char)37;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)247;
signed char var_11 = (signed char)13;
int zero = 0;
unsigned char var_12 = (unsigned char)43;
unsigned char var_13 = (unsigned char)82;
unsigned long long int var_14 = 14290612935584864607ULL;
unsigned char var_15 = (unsigned char)168;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
