#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4393872700011301134LL;
unsigned short var_3 = (unsigned short)51616;
unsigned long long int var_5 = 5003429032903270530ULL;
short var_9 = (short)18148;
int zero = 0;
unsigned char var_14 = (unsigned char)220;
long long int var_15 = 2660392851525887300LL;
unsigned short var_16 = (unsigned short)12575;
long long int var_17 = -4596321102867354334LL;
unsigned int var_18 = 117193320U;
long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 4655537006812537781LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
