#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16488960927313088962ULL;
unsigned int var_4 = 3499356616U;
long long int var_9 = 2223928640891963028LL;
unsigned int var_10 = 1893910762U;
int zero = 0;
unsigned int var_11 = 1267999770U;
unsigned int var_12 = 1390075005U;
long long int var_13 = 7773602670453493387LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
