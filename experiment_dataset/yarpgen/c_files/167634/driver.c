#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5672;
unsigned long long int var_10 = 3294687267082338263ULL;
unsigned long long int var_13 = 2284201124057926740ULL;
int zero = 0;
signed char var_20 = (signed char)-104;
unsigned int var_21 = 4228858242U;
unsigned long long int var_22 = 5584364104774716299ULL;
unsigned int var_23 = 17991038U;
unsigned long long int var_24 = 185884768085914653ULL;
long long int var_25 = 9198182082368401961LL;
unsigned long long int var_26 = 10497636730200442880ULL;
unsigned long long int var_27 = 11987395707956141875ULL;
unsigned long long int var_28 = 11766144801624192035ULL;
unsigned int arr_0 [21] [21] ;
unsigned int arr_5 [21] [21] [21] ;
unsigned long long int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3878290185U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3811822434U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 4153200293504758114ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
