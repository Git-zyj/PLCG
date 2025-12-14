#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5603907977743811153LL;
long long int var_1 = -4309572562235778907LL;
signed char var_2 = (signed char)-21;
long long int var_3 = -4883392129344147621LL;
long long int var_4 = 1259479122084663666LL;
signed char var_5 = (signed char)18;
long long int var_6 = 5511684510480888855LL;
long long int var_7 = -189957092561279315LL;
signed char var_8 = (signed char)-110;
short var_11 = (short)31427;
signed char var_12 = (signed char)101;
signed char var_13 = (signed char)-50;
long long int var_15 = 1899004418513097642LL;
signed char var_16 = (signed char)-8;
int zero = 0;
short var_17 = (short)7342;
long long int var_18 = 2433514180769963486LL;
long long int var_19 = 8608500045904869724LL;
long long int var_20 = 5374706109868927508LL;
signed char var_21 = (signed char)31;
long long int var_22 = 3972812053760119857LL;
signed char var_23 = (signed char)-120;
short var_24 = (short)-10799;
long long int arr_5 [12] [12] ;
unsigned long long int arr_22 [12] [12] [12] [12] [12] [12] ;
short arr_29 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 170282106301650568LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 14568643945948143483ULL : 2272251960321545629ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_29 [i_0] [i_1] = (short)32450;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
