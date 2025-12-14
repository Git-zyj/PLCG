#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -408696421;
unsigned int var_1 = 536615039U;
long long int var_5 = -8609882446620711911LL;
short var_6 = (short)-12489;
int zero = 0;
unsigned char var_11 = (unsigned char)163;
unsigned short var_12 = (unsigned short)51556;
int var_13 = -395455737;
unsigned char var_14 = (unsigned char)204;
unsigned int var_15 = 160368504U;
unsigned long long int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 13838375636947128764ULL;
}

void checksum() {
    hash(&seed, var_11);
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
