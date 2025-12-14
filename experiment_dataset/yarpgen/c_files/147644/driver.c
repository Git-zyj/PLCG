#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11335203842344599243ULL;
unsigned short var_9 = (unsigned short)65425;
long long int var_10 = -1591206348128935051LL;
signed char var_12 = (signed char)-95;
int var_14 = -1067046466;
int zero = 0;
long long int var_18 = -2016562960203124741LL;
int var_19 = -671620830;
unsigned int var_20 = 3126009537U;
int var_21 = 741297299;
unsigned long long int var_22 = 3086508037103523590ULL;
int var_23 = -244492867;
long long int var_24 = 8160245941865520019LL;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2408891110U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
