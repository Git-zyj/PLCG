#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7653572527892395376ULL;
int var_2 = -1513117024;
unsigned char var_3 = (unsigned char)103;
int var_4 = 1562766526;
int var_5 = 1529554652;
unsigned int var_6 = 4072873774U;
long long int var_8 = 3029778527344533401LL;
short var_9 = (short)-9420;
int zero = 0;
unsigned short var_12 = (unsigned short)19653;
short var_13 = (short)-6;
unsigned int var_14 = 1691767108U;
unsigned int var_15 = 825682351U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
