#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41967;
unsigned short var_1 = (unsigned short)573;
unsigned char var_3 = (unsigned char)49;
unsigned char var_8 = (unsigned char)191;
unsigned char var_9 = (unsigned char)156;
unsigned char var_10 = (unsigned char)127;
int zero = 0;
unsigned long long int var_13 = 7835804928749872504ULL;
unsigned char var_14 = (unsigned char)138;
unsigned char var_15 = (unsigned char)37;
unsigned short var_16 = (unsigned short)23354;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
