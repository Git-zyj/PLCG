#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -35475480;
int var_1 = -239802701;
unsigned long long int var_2 = 7526837086837663451ULL;
unsigned short var_5 = (unsigned short)18014;
unsigned int var_6 = 4156737752U;
unsigned short var_9 = (unsigned short)63169;
int zero = 0;
unsigned int var_10 = 2644512759U;
unsigned long long int var_11 = 5519453316183824942ULL;
unsigned short var_12 = (unsigned short)57116;
unsigned int var_13 = 2924301118U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
