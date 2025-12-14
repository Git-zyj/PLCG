#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
unsigned long long int var_2 = 10075754546259289073ULL;
unsigned char var_5 = (unsigned char)68;
unsigned long long int var_6 = 10343587483371294578ULL;
unsigned char var_8 = (unsigned char)18;
unsigned long long int var_9 = 4245103626989950457ULL;
unsigned long long int var_10 = 17862801601698933926ULL;
unsigned char var_11 = (unsigned char)57;
int zero = 0;
unsigned long long int var_15 = 3018659897159726821ULL;
unsigned char var_16 = (unsigned char)210;
unsigned long long int var_17 = 5517532810945755235ULL;
unsigned long long int var_18 = 11526625836083379229ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
