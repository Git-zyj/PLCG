#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)77;
unsigned long long int var_9 = 351545227509033924ULL;
unsigned long long int var_16 = 10986286438518286712ULL;
int var_18 = -1398079670;
int zero = 0;
unsigned char var_19 = (unsigned char)124;
unsigned long long int var_20 = 7878650645779382318ULL;
unsigned long long int var_21 = 9898997003325289099ULL;
unsigned long long int var_22 = 5287720616663357685ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
