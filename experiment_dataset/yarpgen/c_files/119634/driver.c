#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
signed char var_1 = (signed char)89;
unsigned short var_2 = (unsigned short)62774;
signed char var_5 = (signed char)106;
unsigned int var_8 = 1147028310U;
unsigned short var_9 = (unsigned short)59202;
unsigned char var_10 = (unsigned char)180;
unsigned int var_11 = 3151312587U;
int zero = 0;
int var_13 = 300572742;
int var_14 = 1634501574;
signed char var_15 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
