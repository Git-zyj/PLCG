#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 5529595157754940543LL;
unsigned short var_9 = (unsigned short)33573;
int var_11 = -1813900858;
int var_12 = -1984781870;
int var_15 = 2101147108;
unsigned char var_17 = (unsigned char)255;
unsigned int var_19 = 1725072355U;
int zero = 0;
unsigned int var_20 = 3510496024U;
long long int var_21 = -4096356640996537609LL;
int var_22 = 1229470825;
long long int var_23 = -8167201889381873006LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
