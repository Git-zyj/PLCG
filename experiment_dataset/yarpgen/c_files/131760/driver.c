#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6121261941212294085LL;
signed char var_2 = (signed char)88;
signed char var_3 = (signed char)-49;
long long int var_9 = -1589328757575951242LL;
long long int var_10 = 3423754757982799594LL;
int zero = 0;
long long int var_14 = 3236214960635409644LL;
long long int var_15 = 6894804913512324659LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
