#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4250739928173636244ULL;
unsigned int var_1 = 3458332708U;
unsigned long long int var_2 = 10331459066246619473ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 14887283792699018844ULL;
unsigned long long int var_5 = 16085776753723289917ULL;
unsigned char var_7 = (unsigned char)39;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)252;
unsigned long long int var_10 = 2755870557591146623ULL;
signed char var_11 = (signed char)-96;
short var_15 = (short)6614;
_Bool var_16 = (_Bool)1;
short var_18 = (short)10348;
unsigned int var_19 = 4121948745U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)62934;
unsigned int var_22 = 1544677775U;
unsigned long long int var_23 = 4485083599288790112ULL;
unsigned long long int var_24 = 15530179579156713861ULL;
signed char var_25 = (signed char)-88;
unsigned long long int var_26 = 1167051442439325074ULL;
int arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -449414839 : -1128088273;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
