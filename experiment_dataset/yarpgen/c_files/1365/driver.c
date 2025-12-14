#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)63642;
unsigned char var_11 = (unsigned char)191;
unsigned char var_13 = (unsigned char)201;
long long int var_15 = 1322315199368100349LL;
long long int var_16 = -1085094831514046789LL;
int zero = 0;
unsigned char var_18 = (unsigned char)151;
unsigned short var_19 = (unsigned short)55916;
long long int var_20 = 432892847610715357LL;
unsigned int var_21 = 3933144711U;
unsigned long long int var_22 = 5073331614191789861ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
