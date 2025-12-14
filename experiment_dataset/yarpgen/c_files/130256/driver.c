#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3308987038U;
unsigned long long int var_5 = 5253461389069953855ULL;
unsigned long long int var_9 = 1267249333385809303ULL;
unsigned char var_12 = (unsigned char)219;
unsigned char var_13 = (unsigned char)27;
unsigned int var_16 = 2585895634U;
int zero = 0;
unsigned int var_17 = 4242353440U;
signed char var_18 = (signed char)-9;
signed char var_19 = (signed char)-125;
unsigned long long int var_20 = 4333951715097732154ULL;
unsigned char var_21 = (unsigned char)19;
unsigned long long int var_22 = 17343637013354463326ULL;
short arr_2 [14] [14] ;
unsigned int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-19032 : (short)19273;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 4144540418U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
