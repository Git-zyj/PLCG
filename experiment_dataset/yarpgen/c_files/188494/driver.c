#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10531;
unsigned short var_1 = (unsigned short)40167;
unsigned short var_2 = (unsigned short)46166;
int var_3 = 1810338247;
unsigned int var_4 = 1609678506U;
long long int var_5 = -281975332557666368LL;
unsigned long long int var_6 = 3993757390965816385ULL;
unsigned long long int var_7 = 17939814266076588938ULL;
unsigned long long int var_8 = 11604937310102480067ULL;
unsigned char var_9 = (unsigned char)21;
int zero = 0;
unsigned int var_10 = 3720792680U;
signed char var_11 = (signed char)103;
short var_12 = (short)-31197;
int var_13 = -622294922;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
