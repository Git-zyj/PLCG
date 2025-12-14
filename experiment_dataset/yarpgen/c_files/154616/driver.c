#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3380764554799518649ULL;
unsigned int var_4 = 27309378U;
long long int var_6 = 7488848770081254066LL;
unsigned short var_9 = (unsigned short)9289;
int zero = 0;
unsigned int var_12 = 3025668372U;
unsigned int var_13 = 3101866270U;
unsigned char var_14 = (unsigned char)217;
void init() {
}

void checksum() {
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
