#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -444354368;
int var_3 = -1810577518;
short var_4 = (short)-30088;
long long int var_5 = 6192439195193397589LL;
short var_7 = (short)20350;
int var_8 = -359351819;
short var_9 = (short)-27734;
long long int var_12 = -8865529679043867938LL;
long long int var_14 = 997528644297583339LL;
int var_15 = -1413676782;
long long int var_16 = -1696981772092584266LL;
long long int var_17 = 5748509987257831194LL;
int zero = 0;
long long int var_19 = -8439840830383881726LL;
short var_20 = (short)-22822;
unsigned short var_21 = (unsigned short)59473;
short var_22 = (short)13080;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
