#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1236;
short var_5 = (short)18146;
long long int var_6 = 5325075225921831719LL;
unsigned char var_7 = (unsigned char)58;
long long int var_8 = 9022577014552420967LL;
unsigned char var_10 = (unsigned char)153;
int zero = 0;
unsigned int var_11 = 1773321069U;
unsigned char var_12 = (unsigned char)149;
long long int var_13 = 4189403869164265542LL;
unsigned int var_14 = 434262846U;
void init() {
}

void checksum() {
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
