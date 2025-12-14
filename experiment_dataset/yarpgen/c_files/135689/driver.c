#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36879;
unsigned long long int var_1 = 5505403474643289646ULL;
unsigned long long int var_2 = 4606025571181105659ULL;
unsigned long long int var_7 = 3764152302916339374ULL;
int zero = 0;
signed char var_11 = (signed char)-27;
unsigned char var_12 = (unsigned char)255;
unsigned char var_13 = (unsigned char)40;
unsigned long long int var_14 = 2717427267875248490ULL;
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
