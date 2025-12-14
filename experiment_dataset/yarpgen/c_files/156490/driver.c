#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -975259156844391411LL;
unsigned short var_8 = (unsigned short)27825;
long long int var_9 = 8268715717864007688LL;
int zero = 0;
unsigned char var_10 = (unsigned char)169;
unsigned int var_11 = 1035482591U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
