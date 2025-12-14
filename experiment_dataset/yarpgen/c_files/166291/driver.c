#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 80904323U;
unsigned char var_3 = (unsigned char)229;
int var_4 = 1386281038;
unsigned char var_5 = (unsigned char)14;
unsigned int var_6 = 3361309805U;
unsigned char var_7 = (unsigned char)217;
unsigned char var_8 = (unsigned char)104;
long long int var_9 = -4642992107806608057LL;
unsigned char var_10 = (unsigned char)39;
int zero = 0;
unsigned int var_12 = 449966858U;
long long int var_13 = 28081061698945335LL;
unsigned char var_14 = (unsigned char)169;
int var_15 = 1125427267;
short var_16 = (short)4987;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
