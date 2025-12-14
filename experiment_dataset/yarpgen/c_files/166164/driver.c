#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2954975254613580483LL;
int var_1 = 1433979717;
int var_3 = -2075178356;
int var_4 = -101472202;
unsigned int var_5 = 2906855096U;
unsigned short var_10 = (unsigned short)60617;
int var_11 = -723281063;
unsigned short var_13 = (unsigned short)15929;
long long int var_17 = 1294309898413512671LL;
int zero = 0;
long long int var_20 = -3446162847979278934LL;
short var_21 = (short)-6714;
unsigned long long int var_22 = 1541833815238255156ULL;
unsigned short var_23 = (unsigned short)59368;
unsigned char var_24 = (unsigned char)50;
int var_25 = 1887333476;
short arr_3 [15] ;
unsigned long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)13575;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 17987860314178548953ULL : 4352898138691618351ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
