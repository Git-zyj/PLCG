#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7488463651194843861ULL;
short var_3 = (short)-9576;
long long int var_11 = 1471507481490665218LL;
unsigned char var_12 = (unsigned char)217;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 5117800670110397596ULL;
unsigned char var_15 = (unsigned char)140;
_Bool var_17 = (_Bool)1;
signed char var_19 = (signed char)-53;
int zero = 0;
long long int var_20 = 2005419481795938921LL;
signed char var_21 = (signed char)127;
unsigned long long int var_22 = 7520934304696770869ULL;
int var_23 = -1326231543;
unsigned short var_24 = (unsigned short)21211;
void init() {
}

void checksum() {
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
