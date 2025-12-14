#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-121;
long long int var_3 = -1031279233900016514LL;
short var_4 = (short)-16325;
unsigned char var_9 = (unsigned char)205;
unsigned short var_11 = (unsigned short)47246;
int zero = 0;
long long int var_13 = 6082938452497536423LL;
unsigned short var_14 = (unsigned short)33687;
unsigned int var_15 = 2431582420U;
signed char var_16 = (signed char)-49;
int var_17 = -643026089;
unsigned long long int var_18 = 2559734854031311010ULL;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-45;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
