#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7172858919526670425ULL;
unsigned long long int var_9 = 7656151377348296941ULL;
int zero = 0;
long long int var_19 = 3310137823689123995LL;
long long int var_20 = 7387395359115485257LL;
short var_21 = (short)-142;
unsigned short var_22 = (unsigned short)1704;
signed char arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-37;
}

void checksum() {
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
