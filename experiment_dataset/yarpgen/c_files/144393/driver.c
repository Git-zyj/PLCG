#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3052112741437672318ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 13360249473980621678ULL;
int var_8 = -1237677063;
unsigned short var_9 = (unsigned short)27143;
unsigned short var_11 = (unsigned short)62794;
long long int var_13 = -1098509188366992644LL;
int zero = 0;
unsigned long long int var_14 = 10574432401719226241ULL;
int var_15 = 1758004023;
unsigned long long int var_16 = 9737936137815862542ULL;
void init() {
}

void checksum() {
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
