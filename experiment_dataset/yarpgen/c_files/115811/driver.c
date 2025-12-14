#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 652725550U;
unsigned long long int var_2 = 7725762254488393167ULL;
unsigned short var_3 = (unsigned short)4749;
signed char var_4 = (signed char)-116;
unsigned int var_8 = 38537081U;
long long int var_9 = 4441038211529153491LL;
int var_11 = -1832613352;
long long int var_12 = 4360260864587758484LL;
int zero = 0;
unsigned short var_13 = (unsigned short)34371;
long long int var_14 = -6537509593879743347LL;
unsigned short var_15 = (unsigned short)20909;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
