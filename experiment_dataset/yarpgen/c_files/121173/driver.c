#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16337041668398840681ULL;
long long int var_4 = -4375947552268723895LL;
unsigned long long int var_6 = 2171987255787540791ULL;
long long int var_10 = -4959732323831294361LL;
int var_14 = 57277821;
int var_16 = 710791384;
int zero = 0;
unsigned int var_18 = 1899199734U;
unsigned int var_19 = 3270404038U;
short var_20 = (short)-6492;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
