#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7699224189910998556LL;
unsigned long long int var_3 = 3830325099747857631ULL;
unsigned char var_10 = (unsigned char)2;
int var_11 = 855004904;
unsigned long long int var_14 = 5770114027459112000ULL;
int zero = 0;
int var_15 = -554307938;
unsigned long long int var_16 = 16064036228551307190ULL;
void init() {
}

void checksum() {
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
