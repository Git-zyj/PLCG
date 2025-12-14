#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
unsigned short var_2 = (unsigned short)40516;
_Bool var_6 = (_Bool)0;
short var_7 = (short)19906;
long long int var_8 = 8824742602525659420LL;
int zero = 0;
unsigned long long int var_10 = 9176662400355304383ULL;
unsigned long long int var_11 = 3531951412442015431ULL;
unsigned char var_12 = (unsigned char)133;
unsigned long long int var_13 = 9328124593658379284ULL;
unsigned long long int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 146099142002474545ULL;
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
