#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -177842917;
unsigned short var_1 = (unsigned short)22157;
unsigned char var_2 = (unsigned char)151;
signed char var_3 = (signed char)-99;
unsigned long long int var_5 = 11841028503187133458ULL;
unsigned long long int var_6 = 4962850642757665589ULL;
signed char var_7 = (signed char)88;
unsigned long long int var_9 = 13050503637689062897ULL;
int zero = 0;
long long int var_10 = -7228671193074000993LL;
unsigned long long int var_11 = 2194043950101478826ULL;
unsigned int var_12 = 2620945057U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
