#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
signed char var_2 = (signed char)-37;
int var_3 = 1687879089;
short var_6 = (short)14990;
signed char var_9 = (signed char)105;
unsigned char var_10 = (unsigned char)207;
unsigned char var_16 = (unsigned char)128;
int zero = 0;
unsigned short var_17 = (unsigned short)30672;
unsigned int var_18 = 2045826197U;
unsigned long long int var_19 = 9938376685298930349ULL;
unsigned short var_20 = (unsigned short)50095;
int var_21 = 752435111;
short var_22 = (short)14999;
_Bool var_23 = (_Bool)0;
long long int arr_0 [24] ;
int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -3273574873523790724LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -493324413;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
