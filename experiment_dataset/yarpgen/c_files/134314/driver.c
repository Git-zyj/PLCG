#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64380;
unsigned long long int var_5 = 11465037714688593600ULL;
unsigned long long int var_6 = 12067053945661750096ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)25212;
long long int var_20 = -7309828362730860356LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
