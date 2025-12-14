#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3686747765510310090ULL;
signed char var_5 = (signed char)57;
unsigned int var_7 = 803483351U;
signed char var_8 = (signed char)112;
unsigned short var_10 = (unsigned short)13208;
unsigned char var_11 = (unsigned char)123;
unsigned short var_13 = (unsigned short)47348;
long long int var_14 = 8730469480576937088LL;
int zero = 0;
unsigned short var_15 = (unsigned short)13368;
unsigned long long int var_16 = 12828546587382879054ULL;
unsigned long long int var_17 = 5810088983598732146ULL;
unsigned long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 11696582517116024693ULL : 13795231658776831750ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
