#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23163;
long long int var_1 = 7180409766211757334LL;
unsigned long long int var_3 = 12865926243897575417ULL;
unsigned long long int var_4 = 2790156575161018571ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)64090;
long long int var_11 = 8867834377464864551LL;
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
