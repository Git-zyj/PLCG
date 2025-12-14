#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22115;
unsigned long long int var_2 = 7698133735231105017ULL;
short var_3 = (short)-4271;
unsigned long long int var_11 = 14022526230836863562ULL;
unsigned long long int var_13 = 580604172921721234ULL;
int zero = 0;
long long int var_16 = -2689811208216697079LL;
short var_17 = (short)1791;
short var_18 = (short)-29671;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
