#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1944415584215011423LL;
int var_4 = 2069838305;
unsigned long long int var_5 = 18040936522829172007ULL;
int var_7 = 251828581;
long long int var_8 = -2630609197682754402LL;
unsigned short var_9 = (unsigned short)50835;
unsigned short var_10 = (unsigned short)41995;
unsigned long long int var_13 = 11051064145294213578ULL;
int zero = 0;
long long int var_14 = 202743898456221230LL;
int var_15 = 78262649;
unsigned long long int var_16 = 10084454298594109694ULL;
unsigned long long int var_17 = 412976450273073915ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
