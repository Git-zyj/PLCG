#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2843672728253171607ULL;
unsigned long long int var_6 = 2704748727430955505ULL;
unsigned short var_9 = (unsigned short)8052;
unsigned long long int var_10 = 1690171861170942379ULL;
unsigned long long int var_11 = 9990306930163318417ULL;
unsigned long long int var_12 = 4441810241929678632ULL;
int zero = 0;
unsigned long long int var_17 = 11162149429646053753ULL;
unsigned long long int var_18 = 8126601347547102189ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
