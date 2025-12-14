#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7385439460985988939LL;
unsigned short var_10 = (unsigned short)4846;
int zero = 0;
unsigned long long int var_11 = 18184613947983410327ULL;
unsigned long long int var_12 = 18383853652391339160ULL;
void init() {
}

void checksum() {
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
