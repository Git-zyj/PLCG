#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1843901979;
unsigned char var_1 = (unsigned char)212;
unsigned char var_2 = (unsigned char)172;
signed char var_3 = (signed char)-19;
unsigned short var_4 = (unsigned short)63830;
int var_5 = -891835476;
long long int var_7 = -1689724528735354531LL;
int var_8 = 238646845;
long long int var_9 = 7184735242428001516LL;
long long int var_10 = 175522795031088856LL;
int zero = 0;
unsigned long long int var_11 = 11838533102926580681ULL;
unsigned long long int var_12 = 6785918801420247106ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
