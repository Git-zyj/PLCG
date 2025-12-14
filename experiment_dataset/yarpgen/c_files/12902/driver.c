#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8532731048148290187ULL;
short var_4 = (short)-4684;
unsigned long long int var_6 = 16834652920064391140ULL;
long long int var_8 = -8136001326800174110LL;
unsigned long long int var_9 = 6603900375978540725ULL;
unsigned int var_11 = 1873548093U;
unsigned long long int var_12 = 3283630387579438410ULL;
int zero = 0;
int var_14 = 1038696715;
unsigned int var_15 = 27605164U;
void init() {
}

void checksum() {
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
