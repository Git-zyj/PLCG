#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8269141164814740068LL;
unsigned int var_4 = 886924310U;
int var_5 = -1423759542;
unsigned int var_16 = 1547063286U;
short var_17 = (short)20417;
int zero = 0;
unsigned short var_19 = (unsigned short)52495;
unsigned short var_20 = (unsigned short)10085;
unsigned int var_21 = 2128281793U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
