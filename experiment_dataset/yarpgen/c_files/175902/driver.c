#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5847765890389113456LL;
unsigned short var_1 = (unsigned short)25203;
unsigned long long int var_4 = 677488694662079078ULL;
long long int var_5 = 4502278226476982821LL;
unsigned short var_7 = (unsigned short)32922;
int var_9 = -1286759532;
unsigned char var_11 = (unsigned char)37;
unsigned short var_14 = (unsigned short)34106;
int zero = 0;
signed char var_17 = (signed char)-115;
unsigned short var_18 = (unsigned short)20302;
unsigned short var_19 = (unsigned short)4515;
unsigned short var_20 = (unsigned short)57359;
unsigned char var_21 = (unsigned char)251;
unsigned char var_22 = (unsigned char)5;
unsigned short var_23 = (unsigned short)15694;
short arr_2 [12] ;
unsigned char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-25566 : (short)-401;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)156;
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
