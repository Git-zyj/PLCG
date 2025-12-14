#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4115;
long long int var_3 = 11561978730361816LL;
unsigned long long int var_4 = 9997403246151609606ULL;
int var_5 = 1860749476;
signed char var_7 = (signed char)60;
unsigned long long int var_9 = 15765771454437126918ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)8499;
unsigned int var_11 = 1704236157U;
int var_12 = 501423835;
long long int var_13 = 1772313517492046331LL;
int var_14 = 50969784;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
