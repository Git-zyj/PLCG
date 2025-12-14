#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_1 = (unsigned char)238;
unsigned char var_2 = (unsigned char)219;
unsigned int var_3 = 364030763U;
unsigned char var_5 = (unsigned char)217;
long long int var_7 = -3711589841010781642LL;
int var_8 = 700179494;
unsigned long long int var_15 = 8178312883299995386ULL;
int zero = 0;
unsigned long long int var_16 = 7006179805754377624ULL;
unsigned short var_17 = (unsigned short)8031;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2294121055589221103ULL;
unsigned int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2029784339U : 1597994609U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
