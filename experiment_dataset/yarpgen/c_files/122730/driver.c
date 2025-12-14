#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 567172944U;
unsigned long long int var_3 = 1441419391698957057ULL;
unsigned long long int var_5 = 10447124068461998251ULL;
unsigned long long int var_8 = 7879119441459924938ULL;
unsigned int var_9 = 1580934020U;
unsigned int var_18 = 2548561592U;
unsigned long long int var_19 = 13556494545838504821ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 2478406632150308456ULL;
unsigned long long int var_22 = 9979134205884809266ULL;
short var_23 = (short)-5246;
unsigned long long int var_24 = 8976446949884895941ULL;
unsigned long long int var_25 = 16076213320993381050ULL;
short var_26 = (short)-21118;
short arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned int arr_2 [15] ;
short arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)19366;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 549406878U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)13836;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
