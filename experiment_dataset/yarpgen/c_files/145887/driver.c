#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22425;
unsigned long long int var_2 = 3549681945700549968ULL;
unsigned char var_3 = (unsigned char)216;
long long int var_4 = 5508685799631217384LL;
unsigned long long int var_6 = 9467853909413591521ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)23;
unsigned int var_10 = 1037266230U;
signed char var_11 = (signed char)41;
unsigned long long int var_12 = 12846376475530142682ULL;
long long int var_13 = 3613839294295171830LL;
int zero = 0;
unsigned char var_17 = (unsigned char)152;
unsigned char var_18 = (unsigned char)113;
void init() {
}

void checksum() {
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
