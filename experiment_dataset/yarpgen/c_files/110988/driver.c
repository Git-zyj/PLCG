#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10504775228575494110ULL;
unsigned char var_8 = (unsigned char)39;
unsigned long long int var_9 = 6774069030380120294ULL;
unsigned int var_10 = 1064626356U;
unsigned int var_11 = 732875319U;
unsigned int var_12 = 1737892640U;
long long int var_15 = 1873132173101637110LL;
int zero = 0;
int var_20 = -911405525;
long long int var_21 = -8194029349510379619LL;
unsigned int var_22 = 654002789U;
void init() {
}

void checksum() {
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
