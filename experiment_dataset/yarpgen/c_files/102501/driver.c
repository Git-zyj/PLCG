#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15874917922455852299ULL;
unsigned long long int var_3 = 6998907567395301465ULL;
unsigned char var_4 = (unsigned char)139;
unsigned char var_5 = (unsigned char)24;
signed char var_6 = (signed char)-118;
signed char var_7 = (signed char)126;
short var_8 = (short)25957;
unsigned long long int var_9 = 15742956285888020608ULL;
int zero = 0;
int var_11 = -2061971232;
long long int var_12 = 5079886431442587291LL;
long long int var_13 = -8138273651735224258LL;
short var_14 = (short)-20662;
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
