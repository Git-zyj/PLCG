#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-26742;
unsigned long long int var_9 = 17522089921795875712ULL;
int zero = 0;
long long int var_10 = -5246799273788914LL;
short var_11 = (short)-31667;
unsigned long long int var_12 = 291475869009704616ULL;
unsigned int var_13 = 43370151U;
unsigned short var_14 = (unsigned short)51364;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
