#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -379941711;
long long int var_4 = -3838288148184103172LL;
short var_5 = (short)1937;
unsigned short var_7 = (unsigned short)12417;
short var_9 = (short)-13754;
int var_12 = -457154680;
unsigned short var_13 = (unsigned short)42709;
unsigned int var_15 = 3877022976U;
unsigned long long int var_16 = 7357484348628414438ULL;
int zero = 0;
short var_17 = (short)-19781;
signed char var_18 = (signed char)109;
short var_19 = (short)-15401;
int var_20 = -970322210;
unsigned short var_21 = (unsigned short)9496;
long long int var_22 = -4106294006401959742LL;
long long int var_23 = -4197824998477453359LL;
signed char arr_2 [17] ;
int arr_4 [17] [17] ;
_Bool arr_11 [17] [17] [17] ;
unsigned short arr_12 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 2055048630;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)44929;
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
