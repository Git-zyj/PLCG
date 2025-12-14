#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
unsigned long long int var_2 = 66963038781669915ULL;
unsigned long long int var_5 = 5089026423203197470ULL;
unsigned char var_9 = (unsigned char)49;
long long int var_12 = 2564661811957974776LL;
int zero = 0;
unsigned long long int var_13 = 7409242015691927568ULL;
signed char var_14 = (signed char)-52;
void init() {
}

void checksum() {
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
