#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4369398504306491506LL;
unsigned long long int var_2 = 12619191975899797495ULL;
int var_4 = -1255442548;
unsigned char var_9 = (unsigned char)37;
unsigned short var_10 = (unsigned short)22776;
signed char var_11 = (signed char)-63;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1952217595U;
int var_14 = -2034193379;
int var_15 = 1809829706;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
