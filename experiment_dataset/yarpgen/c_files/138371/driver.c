#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -585941834837943589LL;
unsigned short var_6 = (unsigned short)55366;
long long int var_9 = -7286153614456433879LL;
int zero = 0;
unsigned long long int var_10 = 15772685801378327988ULL;
unsigned short var_11 = (unsigned short)1617;
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
