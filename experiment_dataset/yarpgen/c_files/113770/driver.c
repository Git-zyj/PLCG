#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14695853280761982194ULL;
unsigned long long int var_4 = 4358160217326671726ULL;
int var_6 = -1969810737;
int var_9 = -1245188957;
short var_11 = (short)18891;
unsigned int var_12 = 933166181U;
int var_14 = -837664344;
unsigned int var_16 = 2068443315U;
int zero = 0;
unsigned short var_18 = (unsigned short)42268;
short var_19 = (short)-28971;
long long int var_20 = -4889155041899334666LL;
unsigned int var_21 = 12878237U;
long long int var_22 = -8417053323145859660LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
