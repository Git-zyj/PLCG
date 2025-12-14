#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8134745794145802951ULL;
unsigned char var_3 = (unsigned char)174;
long long int var_4 = 2562350397397241537LL;
unsigned char var_9 = (unsigned char)136;
long long int var_14 = 4772111563921478243LL;
int zero = 0;
unsigned long long int var_20 = 7604954898061714921ULL;
unsigned long long int var_21 = 16868388955993985686ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
