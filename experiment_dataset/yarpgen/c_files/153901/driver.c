#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1537649635311966345ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-76;
unsigned short var_8 = (unsigned short)44067;
unsigned char var_10 = (unsigned char)98;
int var_13 = 1315426122;
signed char var_17 = (signed char)-37;
short var_18 = (short)17918;
int zero = 0;
unsigned long long int var_19 = 14860789930820866115ULL;
long long int var_20 = -5518340349016722425LL;
long long int var_21 = -7846487645003265131LL;
long long int var_22 = 6886602649310286809LL;
unsigned long long int var_23 = 560274625781129711ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
