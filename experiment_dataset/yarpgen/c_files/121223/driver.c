#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1095295157;
int var_2 = -173919322;
unsigned char var_4 = (unsigned char)132;
long long int var_6 = 7864132489209261198LL;
int zero = 0;
unsigned char var_11 = (unsigned char)162;
int var_12 = 705180090;
unsigned long long int var_13 = 10048365247844382529ULL;
unsigned int var_14 = 3387256164U;
unsigned char var_15 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
