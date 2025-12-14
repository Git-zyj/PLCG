#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5549;
unsigned long long int var_1 = 8170208486711093466ULL;
unsigned short var_2 = (unsigned short)26014;
signed char var_3 = (signed char)-27;
unsigned long long int var_4 = 1367799219991800841ULL;
int var_5 = -1319233700;
unsigned char var_7 = (unsigned char)65;
long long int var_8 = -6749936233246427619LL;
short var_9 = (short)-9645;
unsigned int var_10 = 3328387376U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-21588;
signed char var_13 = (signed char)17;
unsigned short var_14 = (unsigned short)33547;
int zero = 0;
long long int var_15 = 7802905286561839109LL;
unsigned int var_16 = 809840900U;
long long int var_17 = 3714012226591693386LL;
unsigned char var_18 = (unsigned char)25;
int var_19 = 618119460;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
