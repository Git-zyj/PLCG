#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -464915082;
long long int var_5 = 4630649452135394098LL;
int var_6 = 46216653;
int var_9 = -1494624252;
int var_10 = 1709843307;
int var_18 = -473029799;
int zero = 0;
long long int var_19 = -6674207516914781790LL;
int var_20 = -394988091;
long long int var_21 = -3817261150611068298LL;
long long int var_22 = 915527863582692146LL;
int var_23 = 475535194;
int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -256711994;
}

void checksum() {
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
