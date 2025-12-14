#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3053853132410305510ULL;
unsigned int var_5 = 3445689670U;
unsigned char var_6 = (unsigned char)175;
unsigned short var_8 = (unsigned short)4343;
unsigned short var_9 = (unsigned short)26618;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 659699061293493899ULL;
long long int var_16 = 1106098948896360168LL;
int zero = 0;
long long int var_17 = 409706372547978843LL;
signed char var_18 = (signed char)52;
signed char var_19 = (signed char)71;
void init() {
}

void checksum() {
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
