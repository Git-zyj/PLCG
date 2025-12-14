#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 1156523743608258446LL;
unsigned char var_8 = (unsigned char)91;
short var_9 = (short)32180;
unsigned char var_11 = (unsigned char)40;
unsigned short var_12 = (unsigned short)22521;
unsigned long long int var_13 = 15122492445752347128ULL;
int var_14 = -899504228;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
long long int var_20 = 4238430220078562777LL;
int var_21 = 1061410026;
unsigned long long int var_22 = 13385309339776545500ULL;
short var_23 = (short)12501;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
