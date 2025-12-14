#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2934;
signed char var_1 = (signed char)-21;
unsigned long long int var_2 = 13732344410490586712ULL;
signed char var_4 = (signed char)-62;
unsigned int var_6 = 642166325U;
unsigned long long int var_7 = 16473825514517575013ULL;
unsigned char var_9 = (unsigned char)217;
short var_11 = (short)-7676;
signed char var_12 = (signed char)-50;
unsigned char var_15 = (unsigned char)223;
unsigned int var_16 = 2670110471U;
int zero = 0;
unsigned int var_18 = 2270055945U;
short var_19 = (short)-12409;
unsigned char var_20 = (unsigned char)156;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
