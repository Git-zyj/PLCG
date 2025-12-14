#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7300586683840175545LL;
unsigned char var_1 = (unsigned char)127;
int var_2 = -362157845;
unsigned long long int var_4 = 14453649280294988726ULL;
unsigned long long int var_5 = 16740766251464393390ULL;
long long int var_7 = -7865226776620459016LL;
unsigned int var_9 = 1726122498U;
unsigned int var_10 = 4063893160U;
unsigned int var_11 = 1377042120U;
long long int var_12 = 6336067823290420602LL;
int zero = 0;
int var_13 = -200182162;
int var_14 = 337957137;
unsigned int var_15 = 1773860719U;
unsigned char var_16 = (unsigned char)35;
void init() {
}

void checksum() {
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
