#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 445707593;
unsigned long long int var_5 = 15322320002274530076ULL;
unsigned long long int var_9 = 13961756136886168526ULL;
unsigned long long int var_10 = 12785291526357386598ULL;
unsigned char var_11 = (unsigned char)138;
unsigned int var_13 = 3866628693U;
unsigned int var_15 = 3422414824U;
int zero = 0;
unsigned short var_18 = (unsigned short)47924;
unsigned char var_19 = (unsigned char)13;
unsigned long long int var_20 = 10541355509839900923ULL;
unsigned int var_21 = 1661908258U;
unsigned long long int var_22 = 3854280200046180794ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
