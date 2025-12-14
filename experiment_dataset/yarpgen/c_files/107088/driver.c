#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)78;
unsigned short var_1 = (unsigned short)38446;
unsigned long long int var_4 = 16536178780161692303ULL;
unsigned short var_11 = (unsigned short)32456;
short var_14 = (short)-19587;
signed char var_16 = (signed char)108;
int zero = 0;
long long int var_17 = 934764003556339069LL;
unsigned short var_18 = (unsigned short)7814;
unsigned char var_19 = (unsigned char)176;
int var_20 = 1264647666;
short arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-9287;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
