#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9627;
short var_3 = (short)-8349;
_Bool var_4 = (_Bool)1;
unsigned int var_12 = 3928315463U;
unsigned long long int var_15 = 9100772963028751852ULL;
unsigned int var_16 = 3022689238U;
unsigned long long int var_17 = 2583179488039568962ULL;
short var_18 = (short)11929;
int zero = 0;
unsigned long long int var_19 = 9163771202993809073ULL;
long long int var_20 = -3067499343478557751LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
