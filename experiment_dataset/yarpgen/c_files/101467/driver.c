#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1561365464;
unsigned long long int var_2 = 16882998577999391606ULL;
unsigned long long int var_4 = 16470354215701802697ULL;
unsigned long long int var_8 = 4111694123336775002ULL;
unsigned char var_9 = (unsigned char)195;
int zero = 0;
unsigned long long int var_10 = 1072646757191367798ULL;
unsigned long long int var_11 = 13080884946439025642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
