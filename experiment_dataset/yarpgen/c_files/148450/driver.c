#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30353;
unsigned long long int var_3 = 2750067642501193408ULL;
long long int var_5 = 1773817170399096391LL;
signed char var_9 = (signed char)93;
int var_16 = 1028502225;
int zero = 0;
signed char var_17 = (signed char)36;
unsigned short var_18 = (unsigned short)14328;
int var_19 = 816592217;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
