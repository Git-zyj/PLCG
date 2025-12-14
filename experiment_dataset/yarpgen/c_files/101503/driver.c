#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 535072681140737377ULL;
long long int var_1 = 6918531713112688010LL;
unsigned char var_3 = (unsigned char)124;
short var_4 = (short)-25680;
unsigned long long int var_5 = 8415907265884431037ULL;
unsigned char var_7 = (unsigned char)197;
unsigned char var_8 = (unsigned char)88;
long long int var_9 = 4401671639869063783LL;
long long int var_10 = 1174728914039669174LL;
long long int var_11 = -7580347615227726204LL;
short var_12 = (short)-18209;
unsigned short var_13 = (unsigned short)1151;
int zero = 0;
unsigned char var_14 = (unsigned char)28;
long long int var_15 = 8295751683402622565LL;
unsigned char var_16 = (unsigned char)118;
unsigned char var_17 = (unsigned char)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
