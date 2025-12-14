#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1253686030U;
short var_1 = (short)-6793;
unsigned long long int var_2 = 279943126225298106ULL;
unsigned short var_4 = (unsigned short)54294;
short var_7 = (short)26291;
signed char var_8 = (signed char)-39;
long long int var_9 = -7147388095139742969LL;
unsigned char var_10 = (unsigned char)12;
int zero = 0;
long long int var_11 = 853806194454149391LL;
unsigned int var_12 = 4145309464U;
unsigned long long int var_13 = 8641809767472809826ULL;
unsigned short var_14 = (unsigned short)62676;
short var_15 = (short)-27162;
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
