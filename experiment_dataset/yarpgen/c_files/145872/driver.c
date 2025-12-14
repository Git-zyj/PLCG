#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51170;
long long int var_1 = 2040279216962486110LL;
int var_2 = -1728320708;
int var_4 = 918584043;
int zero = 0;
int var_10 = 1071136622;
unsigned long long int var_11 = 15848560671760435859ULL;
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
