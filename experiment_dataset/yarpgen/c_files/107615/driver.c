#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4787030954848680527ULL;
unsigned short var_8 = (unsigned short)10947;
unsigned short var_12 = (unsigned short)54017;
int zero = 0;
unsigned long long int var_14 = 1436829328675937391ULL;
unsigned char var_15 = (unsigned char)28;
short var_16 = (short)-27335;
long long int var_17 = 161201816010701434LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
