#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 351302991;
unsigned short var_1 = (unsigned short)65060;
long long int var_2 = 1236632631938035581LL;
unsigned int var_4 = 272593932U;
short var_8 = (short)-451;
unsigned short var_9 = (unsigned short)18929;
int zero = 0;
long long int var_13 = 6958312506139751961LL;
unsigned short var_14 = (unsigned short)8001;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
