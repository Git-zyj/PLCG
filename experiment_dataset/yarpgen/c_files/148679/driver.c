#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63856;
unsigned short var_1 = (unsigned short)42501;
unsigned int var_2 = 1764182551U;
unsigned long long int var_3 = 12345718152529397740ULL;
unsigned long long int var_11 = 17000130277065987213ULL;
short var_14 = (short)-8943;
unsigned long long int var_15 = 16964899933568667401ULL;
int zero = 0;
short var_17 = (short)31615;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
