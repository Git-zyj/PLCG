#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 997425255;
unsigned long long int var_8 = 7319983653736203478ULL;
int zero = 0;
short var_11 = (short)19824;
unsigned long long int var_12 = 15471832468615581947ULL;
signed char var_13 = (signed char)-54;
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
