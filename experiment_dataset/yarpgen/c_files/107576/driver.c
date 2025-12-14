#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3397251927U;
unsigned int var_6 = 2969041693U;
int var_7 = 1329075189;
unsigned char var_8 = (unsigned char)194;
unsigned long long int var_9 = 3708327275292267856ULL;
unsigned int var_16 = 655591967U;
unsigned char var_17 = (unsigned char)74;
int zero = 0;
short var_19 = (short)3791;
int var_20 = 1046276828;
unsigned char var_21 = (unsigned char)25;
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
