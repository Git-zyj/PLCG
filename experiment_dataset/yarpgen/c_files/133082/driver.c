#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12857745153984553051ULL;
unsigned long long int var_1 = 418356647960510990ULL;
unsigned long long int var_5 = 1004856807611569464ULL;
unsigned long long int var_6 = 11101110887879403593ULL;
unsigned long long int var_7 = 2207200044262950071ULL;
unsigned long long int var_11 = 6993250514098538684ULL;
int zero = 0;
unsigned long long int var_17 = 18256501687563655585ULL;
unsigned long long int var_18 = 3489183428937820635ULL;
unsigned long long int var_19 = 5053814521326009377ULL;
void init() {
}

void checksum() {
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
