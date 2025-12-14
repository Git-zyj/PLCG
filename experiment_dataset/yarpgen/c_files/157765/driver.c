#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
signed char var_1 = (signed char)-103;
unsigned long long int var_2 = 10628590128167344007ULL;
long long int var_6 = -8418572548815709506LL;
short var_7 = (short)-1488;
unsigned long long int var_9 = 4506520174225618108ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)7;
short var_11 = (short)6096;
unsigned short var_12 = (unsigned short)41196;
unsigned long long int var_13 = 11369565086337499858ULL;
unsigned long long int var_14 = 15920476811506878508ULL;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 9461871804215490904ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
