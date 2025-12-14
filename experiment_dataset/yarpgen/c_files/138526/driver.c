#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14506129845468086028ULL;
signed char var_6 = (signed char)-7;
int zero = 0;
unsigned long long int var_13 = 4516187197531467779ULL;
long long int var_14 = -7824494382773227278LL;
unsigned char var_15 = (unsigned char)25;
unsigned long long int var_16 = 3789819538631151352ULL;
unsigned int var_17 = 3979107794U;
int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1281486738;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
