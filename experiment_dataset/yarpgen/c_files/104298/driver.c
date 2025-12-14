#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3194932255U;
long long int var_1 = -8850885099282604423LL;
unsigned char var_2 = (unsigned char)0;
unsigned char var_6 = (unsigned char)28;
unsigned char var_7 = (unsigned char)86;
int var_9 = 317906050;
int var_11 = -1388551352;
int zero = 0;
long long int var_19 = -3747211637934464294LL;
unsigned int var_20 = 2680359365U;
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
