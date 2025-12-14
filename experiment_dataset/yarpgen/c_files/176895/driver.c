#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9692717194994278297ULL;
unsigned char var_2 = (unsigned char)243;
long long int var_3 = 5042872133901598074LL;
unsigned char var_13 = (unsigned char)194;
unsigned char var_15 = (unsigned char)204;
unsigned int var_16 = 67459826U;
int zero = 0;
unsigned long long int var_17 = 14360411559260381589ULL;
int var_18 = -1833284331;
unsigned short var_19 = (unsigned short)35668;
unsigned long long int var_20 = 2419496328354291460ULL;
short var_21 = (short)27240;
unsigned int var_22 = 1258312702U;
unsigned short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)53692;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
