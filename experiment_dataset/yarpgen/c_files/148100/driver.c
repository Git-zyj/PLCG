#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15417375504963252950ULL;
long long int var_1 = -3092756637161643679LL;
unsigned long long int var_3 = 5697939962781173559ULL;
unsigned short var_4 = (unsigned short)58329;
long long int var_8 = 6359594211582724006LL;
long long int var_9 = -9079468336194213145LL;
int zero = 0;
unsigned int var_10 = 780898035U;
unsigned short var_11 = (unsigned short)62193;
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
