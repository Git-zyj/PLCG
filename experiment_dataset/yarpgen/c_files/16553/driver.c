#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5467134454375063866LL;
unsigned short var_3 = (unsigned short)51623;
unsigned char var_5 = (unsigned char)153;
unsigned long long int var_7 = 17007675437546221901ULL;
unsigned short var_8 = (unsigned short)53378;
short var_9 = (short)-28271;
unsigned char var_12 = (unsigned char)255;
signed char var_17 = (signed char)-103;
int zero = 0;
long long int var_18 = 876876078529167455LL;
unsigned int var_19 = 3801000432U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
