#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17625426027543995992ULL;
unsigned long long int var_2 = 12283502222093473601ULL;
int var_9 = -1112002465;
int zero = 0;
int var_19 = 689630626;
unsigned short var_20 = (unsigned short)43938;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
